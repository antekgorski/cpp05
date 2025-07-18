// Copyright 2025 Antoni Gorski
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:43:21 by agorski           #+#    #+#             */
/*   Updated: 2025/07/07 18:06:54 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(std::time(0));
    try {
        Bureaucrat bureaucrat("John", 1); // Highest grade
        std::cout << bureaucrat;

        AForm *form1 = new PresidentialPardonForm("Alice");
        bureaucrat.signForm(*form1);
        bureaucrat.executeForm(*form1);
        delete form1;

        AForm *form2 = new RobotomyRequestForm("Bob");
        bureaucrat.signForm(*form2);
        bureaucrat.executeForm(*form2);
        delete form2;

        AForm *form3 = new ShrubberyCreationForm("Garden");
        bureaucrat.signForm(*form3);
        bureaucrat.executeForm(*form3);
        delete form3;

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
