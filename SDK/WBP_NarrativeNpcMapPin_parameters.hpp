#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x148 - 0x0)
// Function WBP_NarrativeNpcMapPin.WBP_NarrativeNpcMapPin_C.GetTooltipWidget
struct UWBP_NarrativeNpcMapPin_C_GetTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Tooltip_MapMarker_C*              CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMapWaypointInfo                      CallFunc_GetMapPinInfo_ReturnValue;                // 0x10(0x120)(None)
	class FText                                  CallFunc_GetTooltipTitleText_OutputText;           // 0x130(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function WBP_NarrativeNpcMapPin.WBP_NarrativeNpcMapPin_C.GetTooltipTitleText
struct UWBP_NarrativeNpcMapPin_C_GetTooltipTitleText_Params
{
public:
	class FText                                  OutputText;                                        // 0x0(0x18)(Parm, OutParm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


