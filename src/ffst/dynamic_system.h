#ifndef FFST_DYNSYS_H_
#define FFST_DYNSYS_H_

#include <tuple>

namespace ffst {
  
  class dynamic_system_controller;
  
  template <typename ... T>
  class dynamic_system {
  public:
    dynamic_system();
    ~dynamic_system();
    dynamic_system_controller stabilize();
    std::tuple<T...> slam_predict(std::tuple<T...>);
    std::tuple<T...> slam_correct(std::tuple<T...>);
  private:
    
  };
  
  class dynamic_system_controller {
  public:
    ~dynamic_system_controller();
  private:
    dynamic_system_controller();
    template <typename ... T>
    friend dynamic_system_controller dynamic_system<T...>::stabilize();
  };
  
};

#endif