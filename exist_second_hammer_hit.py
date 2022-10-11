#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ENGG1811 22T3 Assignment 1 

Template file for exist_second_hammer_hit()

@author:  
"""
THRESHOLD = 1.1

def exist_second_hammer_hit(trough_time_list):
    """checks the trough time list if there is a second hammer hit
    trough_time_list: the trough time_list
    """

    i = 1
    size = len(trough_time_list)
    diff = []

    # loop throught the times
    while i < size:

        # compute the difference of consecutive times and save in list
        diff.append(trough_time_list[i] - trough_time_list[i - 1])
        i += 1

    # compute the max and min of the list of differences
    min_max_ratio = max(diff) / min(diff)

    # if the ratio is more than the threshold there is a second hammer hit
    if min_max_ratio > THRESHOLD:
        return True
    # else there no hammer hit
    return False
