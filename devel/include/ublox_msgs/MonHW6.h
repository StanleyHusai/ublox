// Generated by gencpp from file ublox_msgs/MonHW6.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_MONHW6_H
#define UBLOX_MSGS_MESSAGE_MONHW6_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct MonHW6_
{
  typedef MonHW6_<ContainerAllocator> Type;

  MonHW6_()
    : pinSel(0)
    , pinBank(0)
    , pinDir(0)
    , pinVal(0)
    , noisePerMS(0)
    , agcCnt(0)
    , aStatus(0)
    , aPower(0)
    , flags(0)
    , reserved0(0)
    , usedMask(0)
    , VP()
    , jamInd(0)
    , reserved1()
    , pinIrq(0)
    , pullH(0)
    , pullL(0)  {
      VP.assign(0);

      reserved1.assign(0);
  }
  MonHW6_(const ContainerAllocator& _alloc)
    : pinSel(0)
    , pinBank(0)
    , pinDir(0)
    , pinVal(0)
    , noisePerMS(0)
    , agcCnt(0)
    , aStatus(0)
    , aPower(0)
    , flags(0)
    , reserved0(0)
    , usedMask(0)
    , VP()
    , jamInd(0)
    , reserved1()
    , pinIrq(0)
    , pullH(0)
    , pullL(0)  {
  (void)_alloc;
      VP.assign(0);

      reserved1.assign(0);
  }



   typedef uint32_t _pinSel_type;
  _pinSel_type pinSel;

   typedef uint32_t _pinBank_type;
  _pinBank_type pinBank;

   typedef uint32_t _pinDir_type;
  _pinDir_type pinDir;

   typedef uint32_t _pinVal_type;
  _pinVal_type pinVal;

   typedef uint16_t _noisePerMS_type;
  _noisePerMS_type noisePerMS;

   typedef uint16_t _agcCnt_type;
  _agcCnt_type agcCnt;

   typedef uint8_t _aStatus_type;
  _aStatus_type aStatus;

   typedef uint8_t _aPower_type;
  _aPower_type aPower;

   typedef uint8_t _flags_type;
  _flags_type flags;

   typedef uint8_t _reserved0_type;
  _reserved0_type reserved0;

   typedef uint32_t _usedMask_type;
  _usedMask_type usedMask;

   typedef boost::array<uint8_t, 25>  _VP_type;
  _VP_type VP;

   typedef uint8_t _jamInd_type;
  _jamInd_type jamInd;

   typedef boost::array<uint8_t, 2>  _reserved1_type;
  _reserved1_type reserved1;

   typedef uint32_t _pinIrq_type;
  _pinIrq_type pinIrq;

   typedef uint32_t _pullH_type;
  _pullH_type pullH;

   typedef uint32_t _pullL_type;
  _pullL_type pullL;


    enum { CLASS_ID = 10u };
     enum { MESSAGE_ID = 9u };
     enum { A_STATUS_INIT = 0u };
     enum { A_STATUS_UNKNOWN = 1u };
     enum { A_STATUS_OK = 2u };
     enum { A_STATUS_SHORT = 3u };
     enum { A_STATUS_OPEN = 4u };
     enum { A_POWER_OFF = 0u };
     enum { A_POWER_ON = 1u };
     enum { A_POWER_UNKNOWN = 2u };
     enum { FLAGS_RTC_CALIB = 1u };
     enum { FLAGS_SAFE_BOOT = 2u };
     enum { FLAGS_JAMMING_STATE_MASK = 12u };
     enum { JAMMING_STATE_UNKNOWN_OR_DISABLED = 0u };
     enum { JAMMING_STATE_OK = 4u };
     enum { JAMMING_STATE_WARNING = 8u };
     enum { JAMMING_STATE_CRITICAL = 12u };
     enum { FLAGS_XTAL_ABSENT = 16u };
     enum { JAM_IND_NONE = 0u };
     enum { JAM_IND_STRONG = 255u };
 

  typedef boost::shared_ptr< ::ublox_msgs::MonHW6_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::MonHW6_<ContainerAllocator> const> ConstPtr;

}; // struct MonHW6_

typedef ::ublox_msgs::MonHW6_<std::allocator<void> > MonHW6;

typedef boost::shared_ptr< ::ublox_msgs::MonHW6 > MonHW6Ptr;
typedef boost::shared_ptr< ::ublox_msgs::MonHW6 const> MonHW6ConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::MonHW6_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::MonHW6_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/jade/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/husai/catkin_ws/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::MonHW6_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::MonHW6_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::MonHW6_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::MonHW6_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::MonHW6_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::MonHW6_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::MonHW6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c5d1657deaf0dff627f534f669249a58";
  }

  static const char* value(const ::ublox_msgs::MonHW6_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc5d1657deaf0dff6ULL;
  static const uint64_t static_value2 = 0x27f534f669249a58ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::MonHW6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/MonHW6";
  }

  static const char* value(const ::ublox_msgs::MonHW6_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::MonHW6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MON-HW (0x0A 0x09)\n\
# Hardware Status\n\
# Firmware 6\n\
#\n\
# Status of different aspect of the hardware, such as Antenna, PIO/Peripheral \n\
# Pins, Noise Level, Automatic Gain Control (AGC)\n\
#\n\
# WARNING: this message is a different length than the MonHW message for\n\
# firmware version 7 & 8\n\
\n\
uint8 CLASS_ID = 10\n\
uint8 MESSAGE_ID = 9\n\
\n\
uint32 pinSel                 # Mask of Pins Set as Peripheral/PIO\n\
uint32 pinBank                # Mask of Pins Set as Bank A/B\n\
uint32 pinDir                 # Mask of Pins Set as Input/Output\n\
uint32 pinVal                 # Mask of Pins Value Low/High\n\
uint16 noisePerMS             # Noise Level as measured by the GPS Core\n\
uint16 agcCnt                 # AGC Monitor (counts SIGHI xor SIGLO, \n\
                              # range 0 to 8191)\n\
uint8 aStatus                 # Status of the Antenna Supervisor State Machine \n\
uint8 A_STATUS_INIT = 0\n\
uint8 A_STATUS_UNKNOWN = 1\n\
uint8 A_STATUS_OK = 2\n\
uint8 A_STATUS_SHORT = 3\n\
uint8 A_STATUS_OPEN = 4\n\
\n\
uint8 aPower                  # Current PowerStatus of Antenna \n\
uint8 A_POWER_OFF = 0 \n\
uint8 A_POWER_ON = 1\n\
uint8 A_POWER_UNKNOWN = 2\n\
\n\
uint8 flags                   # Flags:\n\
uint8 FLAGS_RTC_CALIB = 1            # RTC is calibrated\n\
uint8 FLAGS_SAFE_BOOT =  2           # Safe boot mode (0 = inactive, 1 = active)\n\
uint8 FLAGS_JAMMING_STATE_MASK = 12  # output from Jamming/Interference Monitor: \n\
uint8 JAMMING_STATE_UNKNOWN_OR_DISABLED = 0   # unknown or feature disabled\n\
uint8 JAMMING_STATE_OK = 4                    # ok - no significant jamming\n\
uint8 JAMMING_STATE_WARNING = 8               # interference visible but fix OK\n\
uint8 JAMMING_STATE_CRITICAL = 12             # interference visible and no fix\n\
uint8 FLAGS_XTAL_ABSENT =  16        # RTC XTAL is absent\n\
                                     # (not supported in protocol versions < 18)\n\
uint8 reserved0               # Reserved\n\
uint32 usedMask               # Mask of Pins that are used by the Virtual Pin \n\
                              # Manager\n\
uint8[25] VP                  # Array of Pin Mappings for each of the 25  \n\
                              # Physical Pins\n\
uint8 jamInd                  # CW Jamming indicator, scaled:\n\
uint8 JAM_IND_NONE = 0          # No CW Jamming\n\
uint8 JAM_IND_STRONG = 255      # Strong CW Jamming    \n\
\n\
uint8[2] reserved1            # Reserved\n\
\n\
uint32 pinIrq                 # Mask of Pins Value using the PIO Irq\n\
uint32 pullH                  # Mask of Pins Value using the PIO Pull High \n\
                              # Resistor\n\
uint32 pullL                  # Mask of Pins Value using the PIO Pull Low \n\
                              # Resistor\n\
";
  }

  static const char* value(const ::ublox_msgs::MonHW6_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::MonHW6_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pinSel);
      stream.next(m.pinBank);
      stream.next(m.pinDir);
      stream.next(m.pinVal);
      stream.next(m.noisePerMS);
      stream.next(m.agcCnt);
      stream.next(m.aStatus);
      stream.next(m.aPower);
      stream.next(m.flags);
      stream.next(m.reserved0);
      stream.next(m.usedMask);
      stream.next(m.VP);
      stream.next(m.jamInd);
      stream.next(m.reserved1);
      stream.next(m.pinIrq);
      stream.next(m.pullH);
      stream.next(m.pullL);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MonHW6_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::MonHW6_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::MonHW6_<ContainerAllocator>& v)
  {
    s << indent << "pinSel: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pinSel);
    s << indent << "pinBank: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pinBank);
    s << indent << "pinDir: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pinDir);
    s << indent << "pinVal: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pinVal);
    s << indent << "noisePerMS: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.noisePerMS);
    s << indent << "agcCnt: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.agcCnt);
    s << indent << "aStatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.aStatus);
    s << indent << "aPower: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.aPower);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
    s << indent << "reserved0: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved0);
    s << indent << "usedMask: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.usedMask);
    s << indent << "VP[]" << std::endl;
    for (size_t i = 0; i < v.VP.size(); ++i)
    {
      s << indent << "  VP[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.VP[i]);
    }
    s << indent << "jamInd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.jamInd);
    s << indent << "reserved1[]" << std::endl;
    for (size_t i = 0; i < v.reserved1.size(); ++i)
    {
      s << indent << "  reserved1[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved1[i]);
    }
    s << indent << "pinIrq: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pinIrq);
    s << indent << "pullH: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pullH);
    s << indent << "pullL: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pullL);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_MONHW6_H
