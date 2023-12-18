from ctypes import *

module = cdll.LoadLibrary("./cpp.dll")
module.calculate_sin_n_times(100000)
module.calculate_sin_n_times(1000000)
module.calculate_sin_n_times(10000000)
module.calculate_sin_n_times(100000000)
module.calculate_sin_n_times(1000000000)
