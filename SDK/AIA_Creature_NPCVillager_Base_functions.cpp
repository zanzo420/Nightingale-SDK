#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_NPCVillager_Base.AIA_Creature_NPCVillager_Base_C
// (None)

class UClass* UAIA_Creature_NPCVillager_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_NPCVillager_Base_C");

	return Clss;
}


// AIA_Creature_NPCVillager_Base_C AIA_Creature_NPCVillager_Base.Default__AIA_Creature_NPCVillager_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_NPCVillager_Base_C* UAIA_Creature_NPCVillager_Base_C::GetDefaultObj()
{
	static class UAIA_Creature_NPCVillager_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_NPCVillager_Base_C*>(UAIA_Creature_NPCVillager_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_NPCVillager_Base.AIA_Creature_NPCVillager_Base_C.Initialize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIC_Creature_NPC_Villager_C*K2Node_DynamicCast_AsAIC_Creature_NPC_Villager                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Initialize_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPCVillager_Base_C::Initialize(class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Initialize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCVillager_Base_C", "Initialize");

	Params::UAIA_Creature_NPCVillager_Base_C_Initialize_Params Parms{};

	Parms.K2Node_DynamicCast_AsAIC_Creature_NPC_Villager = K2Node_DynamicCast_AsAIC_Creature_NPC_Villager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Initialize_ReturnValue = CallFunc_Initialize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPCVillager_Base.AIA_Creature_NPCVillager_Base_C.GetNPCGroup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_CreatureSpawner_NPCGroup_C*NPCGroup                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_NPCGroup_C*K2Node_DynamicCast_AsBP_Creature_Spawner_NPCGroup                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_NPCVillager_Base_C::GetNPCGroup(class ABP_CreatureSpawner_NPCGroup_C** NPCGroup, class ABP_CreatureSpawner_NPCGroup_C* K2Node_DynamicCast_AsBP_Creature_Spawner_NPCGroup, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCVillager_Base_C", "GetNPCGroup");

	Params::UAIA_Creature_NPCVillager_Base_C_GetNPCGroup_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_NPCGroup = K2Node_DynamicCast_AsBP_Creature_Spawner_NPCGroup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NPCGroup != nullptr)
		*NPCGroup = Parms.NPCGroup;

}

}


