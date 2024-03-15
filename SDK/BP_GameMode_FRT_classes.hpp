#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x5D8 - 0x5D8)
// BlueprintGeneratedClass BP_GameMode_FRT.BP_GameMode_FRT_C
class ABP_GameMode_FRT_C : public ABP_GameMode_C
{
public:

	static class UClass* StaticClass();
	static class ABP_GameMode_FRT_C* GetDefaultObj();

	void ResolveSimulationRound(bool* bSuccess);
	void GetSimulationStateManager(class ANWXSimStateManagerBase** Simulation_State_Manager);
};

}


