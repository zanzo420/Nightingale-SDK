#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Weapon_Thrown.BP_Weapon_Thrown_C
// (Actor)

class UClass* ABP_Weapon_Thrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Weapon_Thrown_C");

	return Clss;
}


// BP_Weapon_Thrown_C BP_Weapon_Thrown.Default__BP_Weapon_Thrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Weapon_Thrown_C* ABP_Weapon_Thrown_C::GetDefaultObj()
{
	static class ABP_Weapon_Thrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Weapon_Thrown_C*>(ABP_Weapon_Thrown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Weapon_Thrown.BP_Weapon_Thrown_C.DestroyEquippedItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              NumToDestroy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDestroyAll                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_Thrown_C::DestroyEquippedItem(class AEquippableItem* Item, int32 NumToDestroy, bool bDestroyAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Weapon_Thrown_C", "DestroyEquippedItem");

	Params::ABP_Weapon_Thrown_C_DestroyEquippedItem_Params Parms{};

	Parms.Item = Item;
	Parms.NumToDestroy = NumToDestroy;
	Parms.bDestroyAll = bDestroyAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Weapon_Thrown.BP_Weapon_Thrown_C.GameStateReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Weapon_Thrown_C::GameStateReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Weapon_Thrown_C", "GameStateReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Weapon_Thrown.BP_Weapon_Thrown_C.ExecuteUbergraph_BP_Weapon_Thrown
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             K2Node_Event_Item                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumToDestroy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bDestroyAll                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_Thrown_C::ExecuteUbergraph_BP_Weapon_Thrown(int32 EntryPoint, class AEquippableItem* K2Node_Event_Item, int32 K2Node_Event_NumToDestroy, bool K2Node_Event_bDestroyAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Weapon_Thrown_C", "ExecuteUbergraph_BP_Weapon_Thrown");

	Params::ABP_Weapon_Thrown_C_ExecuteUbergraph_BP_Weapon_Thrown_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.K2Node_Event_NumToDestroy = K2Node_Event_NumToDestroy;
	Parms.K2Node_Event_bDestroyAll = K2Node_Event_bDestroyAll;

	UObject::ProcessEvent(Func, &Parms);

}

}


