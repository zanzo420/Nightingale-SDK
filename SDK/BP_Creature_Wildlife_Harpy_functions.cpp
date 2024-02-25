#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C
// (Actor, Pawn)

class UClass* ABP_Creature_Wildlife_Harpy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_Wildlife_Harpy_C");

	return Clss;
}


// BP_Creature_Wildlife_Harpy_C BP_Creature_Wildlife_Harpy.Default__BP_Creature_Wildlife_Harpy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_Wildlife_Harpy_C* ABP_Creature_Wildlife_Harpy_C::GetDefaultObj()
{
	static class ABP_Creature_Wildlife_Harpy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_Wildlife_Harpy_C*>(ABP_Creature_Wildlife_Harpy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.GetContainerFromProvider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Creature_Wildlife_Harpy_C::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "GetContainerFromProvider");

	Params::ABP_Creature_Wildlife_Harpy_C_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.GetDefaultContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Creature_Wildlife_Harpy_C::GetDefaultContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "GetDefaultContainer");

	Params::ABP_Creature_Wildlife_Harpy_C_GetDefaultContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.HasContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_Wildlife_Harpy_C::HasContainer(TScriptInterface<class IItemContainer>& Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "HasContainer");

	Params::ABP_Creature_Wildlife_Harpy_C_HasContainer_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.HasContainerFromHandle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_Wildlife_Harpy_C::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "HasContainerFromHandle");

	Params::ABP_Creature_Wildlife_Harpy_C_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.ProxySpawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItemProxyBase*              ProxyItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Harpy_C::ProxySpawned(class AItemProxyBase* ProxyItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "ProxySpawned");

	Params::ABP_Creature_Wildlife_Harpy_C_ProxySpawned_Params Parms{};

	Parms.ProxyItem = ProxyItem;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.OnRep_bTurnOnLootShimmer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_Wildlife_Harpy_C::OnRep_bTurnOnLootShimmer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "OnRep_bTurnOnLootShimmer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.HandleTagCountChanged
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Harpy_C::HandleTagCountChanged(struct FGameplayTag& Tag, int32 Count, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "HandleTagCountChanged");

	Params::ABP_Creature_Wildlife_Harpy_C_HandleTagCountChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.Count = Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.DropItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LVector                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  LTransform                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXItemProxySpawnerSubsystem*CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetAllItems_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Harpy_C::DropItem(const struct FVector& LVector, const struct FTransform& LTransform, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "DropItem");

	Params::ABP_Creature_Wildlife_Harpy_C_DropItem_Params Parms{};

	Parms.LVector = LVector;
	Parms.LTransform = LTransform;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetAllItems_self_CastInput = CallFunc_GetAllItems_self_CastInput;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue = CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.Start_WP_Indicator
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_Wildlife_Harpy_C::Start_WP_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "Start_WP_Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.GetAngry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              NewParam1                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Harpy_C::GetAngry(class AActor* Target, uint8 NewParam1, const struct FGameplayTag& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "GetAngry");

	Params::ABP_Creature_Wildlife_Harpy_C_GetAngry_Params Parms{};

	Parms.Target = Target;
	Parms.NewParam1 = NewParam1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.RemoveItemCreatureGrants
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Harpy_C::RemoveItemCreatureGrants(class AEquippableItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "RemoveItemCreatureGrants");

	Params::ABP_Creature_Wildlife_Harpy_C_RemoveItemCreatureGrants_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.UpdateRunDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        LBlackboard                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXAIController*            LAIC                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItem_Weapon                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAICCreatureDataInterface>CallFunc_GetCreatureRunDistance_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCreatureRunDistance_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAIController*            CallFunc_GetCreatureController_CreatureController                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Harpy_C::UpdateRunDistance(class UBlackboardComponent* LBlackboard, class ANWXAIController* LAIC, class AEquippableItem* CallFunc_GetItem_Weapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetBBVar_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetCreatureRunDistance_self_CastInput, float CallFunc_GetCreatureRunDistance_ReturnValue, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "UpdateRunDistance");

	Params::ABP_Creature_Wildlife_Harpy_C_UpdateRunDistance_Params Parms{};

	Parms.LBlackboard = LBlackboard;
	Parms.LAIC = LAIC;
	Parms.CallFunc_GetItem_Weapon = CallFunc_GetItem_Weapon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBBVar_ReturnValue_1 = CallFunc_GetBBVar_ReturnValue_1;
	Parms.CallFunc_GetCreatureRunDistance_self_CastInput = CallFunc_GetCreatureRunDistance_self_CastInput;
	Parms.CallFunc_GetCreatureRunDistance_ReturnValue = CallFunc_GetCreatureRunDistance_ReturnValue;
	Parms.CallFunc_GetCreatureController_CreatureController = CallFunc_GetCreatureController_CreatureController;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.ApplyItemCreatureGrants
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Harpy_C::ApplyItemCreatureGrants(class AEquippableItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "ApplyItemCreatureGrants");

	Params::ABP_Creature_Wildlife_Harpy_C_ApplyItemCreatureGrants_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.Creature_OnDamageReceived
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Creature_Wildlife_Harpy_C::Creature_OnDamageReceived(double Damage, class AActor* Target, class AActor* Source, const struct FGameplayTagContainer& EffectTags, const struct FHitResult& HitResult, const struct FTagValueContainer& TagValueContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "Creature_OnDamageReceived");

	Params::ABP_Creature_Wildlife_Harpy_C_Creature_OnDamageReceived_Params Parms{};

	Parms.Damage = Damage;
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.CrossServerSendGameplayEventToActor
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Payload                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Creature_Wildlife_Harpy_C::CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "CrossServerSendGameplayEventToActor");

	Params::ABP_Creature_Wildlife_Harpy_C_CrossServerSendGameplayEventToActor_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Creature_Wildlife_Harpy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C.ExecuteUbergraph_BP_Creature_Wildlife_Harpy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_EventTag                                            (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_Payload                                             (ConstParm)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Harpy_C::ExecuteUbergraph_BP_Creature_Wildlife_Harpy(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Harpy_C", "ExecuteUbergraph_BP_Creature_Wildlife_Harpy");

	Params::ABP_Creature_Wildlife_Harpy_C_ExecuteUbergraph_BP_Creature_Wildlife_Harpy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventTag = K2Node_Event_EventTag;
	Parms.K2Node_Event_Payload = K2Node_Event_Payload;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


