#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_GetResourceBeaconHarvestLocation.BTT_GetResourceBeaconHarvestLocation_C
// (None)

class UClass* UBTT_GetResourceBeaconHarvestLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_GetResourceBeaconHarvestLocation_C");

	return Clss;
}


// BTT_GetResourceBeaconHarvestLocation_C BTT_GetResourceBeaconHarvestLocation.Default__BTT_GetResourceBeaconHarvestLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_GetResourceBeaconHarvestLocation_C* UBTT_GetResourceBeaconHarvestLocation_C::GetDefaultObj()
{
	static class UBTT_GetResourceBeaconHarvestLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_GetResourceBeaconHarvestLocation_C*>(UBTT_GetResourceBeaconHarvestLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_GetResourceBeaconHarvestLocation.BTT_GetResourceBeaconHarvestLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_GetResourceBeaconHarvestLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_GetResourceBeaconHarvestLocation_C", "ReceiveExecuteAI");

	Params::UBTT_GetResourceBeaconHarvestLocation_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_GetResourceBeaconHarvestLocation.BTT_GetResourceBeaconHarvestLocation_C.ExecuteUbergraph_BTT_GetResourceBeaconHarvestLocation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetBlackboardValueAsObject_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIC_Creature_NPC_Villager_C*K2Node_DynamicCast_AsAIC_Creature_NPC_Villager                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInstancedResourceNodeComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocationReachableOnNavMesh_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceNode_IIM_C*      K2Node_DynamicCast_AsBP_Resource_Node_IIM                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIIMInstance                CallFunc_GetInstance_OutInstance                                 (None)
// bool                               CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesInstanceMatchResourceType_bDidMatch                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_GetResourceBeaconHarvestLocation_C::ExecuteUbergraph_BTT_GetResourceBeaconHarvestLocation(int32 EntryPoint, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_1, class UInstancedResourceNodeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsLocationReachableOnNavMesh_ReturnValue, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess_2, const struct FIIMInstance& CallFunc_GetInstance_OutInstance, bool CallFunc_GetInstance_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_DoesInstanceMatchResourceType_bDidMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_GetResourceBeaconHarvestLocation_C", "ExecuteUbergraph_BTT_GetResourceBeaconHarvestLocation");

	Params::UBTT_GetResourceBeaconHarvestLocation_C_ExecuteUbergraph_BTT_GetResourceBeaconHarvestLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBlackboardValueAsObject_ReturnValue = CallFunc_GetBlackboardValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsAIC_Creature_NPC_Villager = K2Node_DynamicCast_AsAIC_Creature_NPC_Villager;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsLocationReachableOnNavMesh_ReturnValue = CallFunc_IsLocationReachableOnNavMesh_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Resource_Node_IIM = K2Node_DynamicCast_AsBP_Resource_Node_IIM;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetInstance_OutInstance = CallFunc_GetInstance_OutInstance;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC_Villager = K2Node_DynamicCast_AsBP_Creature_NPC_Villager;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_DoesInstanceMatchResourceType_bDidMatch = CallFunc_DoesInstanceMatchResourceType_bDidMatch;

	UObject::ProcessEvent(Func, &Parms);

}

}


