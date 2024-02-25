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

// 0x1 (0x1 - 0x0)
// Function BP_GameMode_FRT.BP_GameMode_FRT_C.ResolveSimulationRound
struct ABP_GameMode_FRT_C_ResolveSimulationRound_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_GameMode_FRT.BP_GameMode_FRT_C.GetSimulationStateManager
struct ABP_GameMode_FRT_C_GetSimulationStateManager_Params
{
public:
	class ANWXSimStateManagerBase*               Simulation_State_Manager;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


