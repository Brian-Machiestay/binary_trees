#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ENGG1811 22T3 Assignment 1 

Template file for find_trough_time_amp()

@author:  
"""

def find_trough_time_amp(time_list, resp_list, trough_amp_upper_bound):
    """This function computes the amplitudes of the troughs
    and their corresponding times

    resp_list: the sampled amplitudes
    
    time_list: the times taken to reach the sampled amplitudes

    trough_amp_upper_bound: the amp above which troughs are invalid
    """

    trough_time_list = []
    trough_amp_list = []

    # name too long so set the upper bound to a usable name same as rest
    amp_bound = trough_amp_upper_bound
    amps = resp_list
    times = time_list

    # length of the response list
    size = len(resp_list)

    # the smallest amplitude seen so far
    smallest_amp = 0
    i = 0
    while(i < size):
        if amps[i] < 0 and amps[i] < amp_bound and amps[i] < smallest_amp:
            smallest_amp = amps[i]

            # if the next value is greater than the smallest seen then a trough
            if i + 1 < size and amps[i + 1] > smallest_amp:

                # append the trough value and corresponding time
                trough_amp_list.append(amps[i])
                trough_time_list.append(times[i])

                # rush through rest of amplitudes to get next least value
                # greater than zero
                while (i < size and amps[i] < 0):
                    i = i + 1

        # reset the smallest amplitude to find the next trough
        smallest_amp = 0
        i = i + 1
    return trough_time_list, trough_amp_list
