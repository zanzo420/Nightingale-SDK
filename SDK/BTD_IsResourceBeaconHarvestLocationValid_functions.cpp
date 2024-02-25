#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_IsResourceBeaconHarvestLocationValid.BTD_IsResourceBeaconHarvestLocationValid_C
// (None)

class UClass* UBTD_IsResourceBeaconHarvestLocationValid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_IsResourceBeaconHarvestLocationValid_C");

	return Clss;
}


// BTD_IsResourceBeaconHarvestLocationValid_C BTD_IsResourceBeaconHarvestLocationValid.Default__BTD_IsResourceBeaconHarvestLocationValid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_IsResourceBeaconHarvestLocationValid_C* UBTD_IsResourceBeaconHarvestLocationValid_C::GetDefaultObj()
{
	static class UBTD_IsResourceBeaconHarvestLocationValid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_IsResourceBeaconHarvestLocationValid_C*>(UBTD_IsResourceBeaconHarvestLocationValid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_IsResourceBeaconHarvestLocationValid.BTD_IsResourceBeaconHarvestLocationValid_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIC_Creature_NPC_Villager_C*K2Node_DynamicCast_AsAIC_Creature_NPC_Villager                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ResourceNode_C>K2Node_DynamicCast_AsBPI_Resource_Node                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInstanceHarvestable_IsHarvestable                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_IsResourceBeaconHarvestLocationValid_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_ResourceNode_C> K2Node_DynamicCast_AsBPI_Resource_Node, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsInstanceHarvestable_IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_IsResourceBeaconHarvestLocationValid_C", "PerformConditionCheckAI");

	Params::UBTD_IsResourceBeaconHarvestLocationValid_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsAIC_Creature_NPC_Villager = K2Node_DynamicCast_AsAIC_Creature_NPC_Villager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Resource_Node = K2Node_DynamicCast_AsBPI_Resource_Node;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsInstanceHarvestable_IsHarvestable = CallFunc_IsInstanceHarvestable_IsHarvestable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


