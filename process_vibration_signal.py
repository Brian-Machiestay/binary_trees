#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ENGG1811 22T3 Assignment 1 

Template file for processs_vibration_signal()

@author: 
"""
MIN_NUMBER_OF_TROUGHS = 4
MIN_SIZE_OF_TIME_RESP_LIST = 9

import find_trough_time_amp as trough
import exist_second_hammer_hit as second
import calc_damping_ratio as damping

def processs_vibration_signal(time_list,resp_list,trough_amp_upper_bound):
    """this function processes the vibration signal
    time_list: the response times
    resp_list: the amplitudes per sampling times
    trough_amp_upper_bound: the trough upper bound
    """
    bound = trough_amp_upper_bound
    rep = resp_list
    time = time_list
    if type(bound) is not int:
        if type(bound) is not float:
            return "invalid input"
    if bound > 0:
        return "invalid input"
    if len(time) != len(rep):
        return "invalid input"
    if len(time) < MIN_SIZE_OF_TIME_RESP_LIST:
        return "invalid input"
    trough_amp_time_list = trough.find_trough_time_amp(time, rep, bound)
    trough_time_list = trough_amp_time_list[0]
    trough_amp_list = trough_amp_time_list[1]

    if len(trough_time_list) < MIN_NUMBER_OF_TROUGHS:
        return "too few troughs"
    if (second.exist_second_hammer_hit(trough_time_list)):
        return "second hammer hit"
    return damping.calc_damping_ratio(trough_amp_list)
