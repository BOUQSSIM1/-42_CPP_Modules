/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:14:12 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/05 22:36:57 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    iter(arr, 2, f);
    
    std::string arr1[] = {"Aaa", "Bbb", "Ccc", "Ddd", "Eee"};
    iter(arr1, 5, f);
    
    float arr2[]= {1.02f, 7.25f, 0.1f, 654.2f, -5.2f};
    iter(arr2, 3, f);
}