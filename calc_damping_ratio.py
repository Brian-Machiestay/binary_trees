#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ENGG1811 22T3 Assignment 1 

Template file for calc_damping_ratio()

@author:  
"""
import math
import calc_trough_amp_ratio as amp_ratio
import calc_geometric_mean as gm

def calc_damping_ratio(trough_amp_list):
    """calculates the damping ratio
    trough_amp_list: the trough amplitudes
    """

    trough_amp_rat = amp_ratio.calc_trough_amp_ratio(trough_amp_list)
    geo_mean = gm.calc_geometric_mean(trough_amp_rat)

    r = math.log(geo_mean) / (2 * math.pi)

    return abs(r)
