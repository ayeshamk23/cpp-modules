/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:51:24 by aymohamm          #+#    #+#             */
/*   Updated: 2024/12/07 16:51:27 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_HPP

# define PHONEBOOK_UTILS_HPP

# include <iostream>
# include "Contact.hpp"

/* Returns a string with n spaces */
std::string	add_spaces(int n);

/* adding "." if the width of the text is more than 10 */
std::string	fix_width(std::string str, long unsigned max);

/* display pretty */
int			search_ui(Contact contacts[8]);



#endif
