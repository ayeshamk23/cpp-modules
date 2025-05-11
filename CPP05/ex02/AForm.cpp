#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("DefaultForm"), _isSigned(false), _signGrade(75), _execGrade(75) {}

AForm::AForm(const std::string& name, int signGrade, int execGrade)
    : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : _name(other._name), _isSigned(other._isSigned),
      _signGrade(other._signGrade), _execGrade(other._execGrade) {}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other)
        _isSigned = other._isSigned;
    return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const { return _name; }
bool AForm::isSigned() const { return _isSigned; }
int AForm::getSignGrade() const { return _signGrade; }
int AForm::getExecGrade() const { return _execGrade; }

void AForm::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSigned = true;
}

void AForm::checkExecutability(const Bureaucrat& executor) const {
    if (!_isSigned)
        throw FormNotSignedException();
    if (executor.getGrade() > _execGrade)
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "AForm: Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "AForm: Grade too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "AForm: Form is not signed!";
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
    out << "AForm \"" << form.getName()
        << "\", req. sign grade: " << form.getSignGrade()
        << ", req. exec grade: " << form.getExecGrade()
        << ", signed: " << (form.isSigned() ? "yes" : "no");
    return out;
}