#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("DefaultForm"), _isSigned(false), _signGrade(75), _execGrade(75) {}

Form::Form(const std::string& name, int signGrade, int execGrade)
    : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other)
    : _name(other._name), _isSigned(other._isSigned),
      _signGrade(other._signGrade), _execGrade(other._execGrade) {}

Form& Form::operator=(const Form& other) {
    if (this != &other)
        _isSigned = other._isSigned;
    return *this;
}

Form::~Form() {}

const std::string& Form::getName() const {
    return _name;
}

bool Form::isSigned() const {
    return _isSigned;
}

int Form::getSignGrade() const {
    return _signGrade;
}

int Form::getExecGrade() const {
    return _execGrade;
}

void Form::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form: Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form: Grade too low!";
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << "Form \"" << form.getName()
        << "\", req. sign grade: " << form.getSignGrade()
        << ", req. exec grade: " << form.getExecGrade()
        << ", signed: " << (form.isSigned() ? "yes" : "no");
    return out;
}