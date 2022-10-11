#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ENGG1811 22T3 Assignment 1 

Template file for calc_trough_amp_ratio()

@author: 
"""

def calc_trough_amp_ratio(trough_amp_list):
   """calculate the ratio of consecutive amplitudes in the list
   trough_amp_list: the trough amplitude lists
   """

   ratio = []
   i = 1

   # the size of the list
   size = len(trough_amp_list)

   while i < size:

      # compute the ratio of the current value by the previous one
      # and append to the ratio list
      this_ratio = trough_amp_list[i] / trough_amp_list[i - 1]
      ratio.append(this_ratio)

      i = i + 1

   return ratio
