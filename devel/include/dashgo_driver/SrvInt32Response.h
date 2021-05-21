// Generated by gencpp from file dashgo_driver/SrvInt32Response.msg
// DO NOT EDIT!


#ifndef DASHGO_DRIVER_MESSAGE_SRVINT32RESPONSE_H
#define DASHGO_DRIVER_MESSAGE_SRVINT32RESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dashgo_driver
{
template <class ContainerAllocator>
struct SrvInt32Response_
{
  typedef SrvInt32Response_<ContainerAllocator> Type;

  SrvInt32Response_()
    : val(0)  {
    }
  SrvInt32Response_(const ContainerAllocator& _alloc)
    : val(0)  {
  (void)_alloc;
    }



   typedef int32_t _val_type;
  _val_type val;





  typedef boost::shared_ptr< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> const> ConstPtr;

}; // struct SrvInt32Response_

typedef ::dashgo_driver::SrvInt32Response_<std::allocator<void> > SrvInt32Response;

typedef boost::shared_ptr< ::dashgo_driver::SrvInt32Response > SrvInt32ResponsePtr;
typedef boost::shared_ptr< ::dashgo_driver::SrvInt32Response const> SrvInt32ResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dashgo_driver::SrvInt32Response_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dashgo_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "50ce5d329885e7178604b54270ec733c";
  }

  static const char* value(const ::dashgo_driver::SrvInt32Response_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x50ce5d329885e717ULL;
  static const uint64_t static_value2 = 0x8604b54270ec733cULL;
};

template<class ContainerAllocator>
struct DataType< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dashgo_driver/SrvInt32Response";
  }

  static const char* value(const ::dashgo_driver::SrvInt32Response_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 val\n\
\n\
\n\
";
  }

  static const char* value(const ::dashgo_driver::SrvInt32Response_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SrvInt32Response_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dashgo_driver::SrvInt32Response_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dashgo_driver::SrvInt32Response_<ContainerAllocator>& v)
  {
    s << indent << "val: ";
    Printer<int32_t>::stream(s, indent + "  ", v.val);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DASHGO_DRIVER_MESSAGE_SRVINT32RESPONSE_H
