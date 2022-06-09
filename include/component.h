/*
** EPITECH PROJECT, 2021
** BootstrapMyRunner
** File description:
** component.h
*/

#ifndef BOOTSTRAPMYRUNNER_COMPONENT_H
#define BOOTSTRAPMYRUNNER_COMPONENT_H

struct animator_s {
    double update_time_interval;
    double next_update_time;
    int current_pos_x;
    int current_pos_y;
    int min_pos_x;
    int max_pos_x;
    int min_pos_y;
    int max_pos_y;
    int offset_x;
    int offset_y;
};

#endif //BOOTSTRAPMYRUNNER_COMPONENT_H
