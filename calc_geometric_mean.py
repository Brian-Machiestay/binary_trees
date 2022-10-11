#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ENGG1811 22T3 Assignment 1 

Template file for calc_geometric_mean()

@author: 
"""

def calc_geometric_mean(a_list):
    """ calculates the geometric mean of the ratios
    a_list: a list of numbers
    """

    products = 1
    for number in a_list:
        products = products * number

    exponent = 1 / len(a_list)
    result = products ** exponent

    return result

    

