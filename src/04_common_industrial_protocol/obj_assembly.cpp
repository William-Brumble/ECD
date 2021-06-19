
/* ==== Class Code: 0x04 ==== */

// Assembly Instance ID Ranges
// =================================================
// 01-63		-- Static Open
// C8-2FF		-- Static Open
// 500-FFFFF	-- Static Open

// Class Attributes
// =================================================
// 1 - Revision
// UINT
// Revision of this object
// The current value assigned to this attribute is one (01).If updates that
// require an increase in this value are made, then the value of this attribute
// increases by 1.
// 
// 2 - Max Instance
// UINT
// Maximum instance number of an object currently created in this class level
// of the device.
// The largest instance number of a created object at this class hierarchy 
// level.
// 
// 3 - Number of Instances
// UINT
// Number of object instances currently created at this class level of the
// device.
// The number of object instances at this class hierarchy level.
// 
// 4 - Optional Attribute List / Number Of Attributes / Optional Attributes
// STRUCT of
// Optional Attribute List:
// List of optional instance attributes utilized in an object class 
// implementation.
// A list of attribute numbers specifying the optional attributes implemented
// in the device for this class.
// 
// UINT
// Number Of Attributes:
// Number of attributes in the optional attribute list.
// The number of attribute numbers in the list.
// 
// ARRAY of UINT
// Optional Attributes:
// List of optional attribute numbers.
// The optional attribute numbers.
// 
// 5 - Optional Service List / Number Of Services / Optional Services
// STRUCT of
// Optional Service List:
// List of optional services utilized in an object class implementation.
// A list of service codes specifying the optional services implemented in the
// device for this class.
// 
// UINT
// Number Of Services:
// Number of services in the optional service list.
// The number of service codes in the list.
// 
// ARRAY of UINT
// Optional Services:
// List of optional service codes.
// The optional service codes.
// 
// 6 - Maximum ID Number Class Attributes
// UINT
// The attribute ID number of the last class attribute of the class definition
// implemented in the device.
// 
// 7 - Maximum ID Number Instance Attributes
// UINT
// The attribute ID number of the last instance attribute of the class
// definition implemented in the device.

// Instance Attributes
// =================================================
// 3 - DATA
// 4 - SIZE

// Common Services:
// =================================================
// 
// 0Ehex - Get_Attribute_Single
// Returns the contents of the specified attribute.
// 
// 10hex - Set_Attribute_Single
// Modifies an attribute value.
// 
// 18hex - Get_Member
// Returns a member from the Assembly Member List or Data attributes.
// 
// 19hex - Set_Member
// Modifies a member of the Assembly Member List or Data attributes.