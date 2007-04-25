#ifndef __URFS_KERNEL_H
#define __URFS_KERNEL_H

// commands
enum urfs_cmd{
  URFS_CMD_GET_FILTERS_INFO_PREPARE = 0,
  URFS_CMD_GET_FILTERS_INFO_DATA = 1,
  URFS_CMD_GET_FILTER_PATHS_INFO_PREPARE = 2,
  URFS_CMD_GET_FILTER_PATHS_INFO_DATA = 3,
  URFS_CMD_SET_FILTER_PATH = 4,
  URFS_CMD_ACTIVATE_FILTER = 5,
  URFS_CMD_DEACTIVATE_FILTER = 6,
};

#endif
