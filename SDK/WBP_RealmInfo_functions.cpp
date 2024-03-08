#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RealmInfo.WBP_RealmInfo_C
// (None)

class UClass* UWBP_RealmInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RealmInfo_C");

	return Clss;
}


// WBP_RealmInfo_C WBP_RealmInfo.Default__WBP_RealmInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RealmInfo_C* UWBP_RealmInfo_C::GetDefaultObj()
{
	static class UWBP_RealmInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RealmInfo_C*>(UWBP_RealmInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RealmInfo.WBP_RealmInfo_C.UpdateRealmCards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Realm_Cards                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FItemData>           Cards                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmInfo_C::UpdateRealmCards(TArray<struct FInventoryEntry>& Realm_Cards, const TArray<struct FItemData>& Cards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmInfo_C", "UpdateRealmCards");

	Params::UWBP_RealmInfo_C_UpdateRealmCards_Params Parms{};

	Parms.Realm_Cards = Realm_Cards;
	Parms.Cards = Cards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmInfo.WBP_RealmInfo_C.UpdateRealmInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRealmSettings              RealmSettings                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FDataTableRowHandle> NewLocalVar                                                      (Edit, BlueprintVisible)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_GenerateRealmCardsData_ReturnValue                      (ReferenceParm, ContainsInstancedReference)
// TArray<struct FNWXNPCNarrativeData>CallFunc_GetNarrativeNPCsFromRealm_OutNPCs                       (ReferenceParm)
// TArray<enum class EFaction>        CallFunc_GetFactionsFromRealm_Factions                           (ReferenceParm)
// TArray<struct FDataTableRowHandle> CallFunc_GetCreaturesFromRealm_SpawnerData                       (ReferenceParm)

void UWBP_RealmInfo_C::UpdateRealmInformation(const struct FRealmSettings& RealmSettings, const TArray<struct FDataTableRowHandle>& NewLocalVar, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, TArray<struct FItemData>& CallFunc_GenerateRealmCardsData_ReturnValue, TArray<struct FNWXNPCNarrativeData>& CallFunc_GetNarrativeNPCsFromRealm_OutNPCs, TArray<enum class EFaction>& CallFunc_GetFactionsFromRealm_Factions, TArray<struct FDataTableRowHandle>& CallFunc_GetCreaturesFromRealm_SpawnerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmInfo_C", "UpdateRealmInformation");

	Params::UWBP_RealmInfo_C_UpdateRealmInformation_Params Parms{};

	Parms.RealmSettings = RealmSettings;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;
	Parms.CallFunc_GenerateRealmCardsData_ReturnValue = CallFunc_GenerateRealmCardsData_ReturnValue;
	Parms.CallFunc_GetNarrativeNPCsFromRealm_OutNPCs = CallFunc_GetNarrativeNPCsFromRealm_OutNPCs;
	Parms.CallFunc_GetFactionsFromRealm_Factions = CallFunc_GetFactionsFromRealm_Factions;
	Parms.CallFunc_GetCreaturesFromRealm_SpawnerData = CallFunc_GetCreaturesFromRealm_SpawnerData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmInfo.WBP_RealmInfo_C.BndEvt__WBP_RealmInfo_CBU_NavRight_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmInfo_C::BndEvt__WBP_RealmInfo_CBU_NavRight_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmInfo_C", "BndEvt__WBP_RealmInfo_CBU_NavRight_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_RealmInfo_C_BndEvt__WBP_RealmInfo_CBU_NavRight_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmInfo.WBP_RealmInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RealmInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmInfo.WBP_RealmInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RealmInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmInfo_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmInfo.WBP_RealmInfo_C.ExecuteUbergraph_WBP_RealmInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmInfo_C::ExecuteUbergraph_WBP_RealmInfo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetActiveWidget_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmInfo_C", "ExecuteUbergraph_WBP_RealmInfo");

	Params::UWBP_RealmInfo_C_ExecuteUbergraph_WBP_RealmInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


