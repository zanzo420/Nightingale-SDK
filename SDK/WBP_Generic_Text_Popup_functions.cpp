#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Generic_Text_Popup.WBP_Generic_Text_Popup_C
// (None)

class UClass* UWBP_Generic_Text_Popup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Generic_Text_Popup_C");

	return Clss;
}


// WBP_Generic_Text_Popup_C WBP_Generic_Text_Popup.Default__WBP_Generic_Text_Popup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Generic_Text_Popup_C* UWBP_Generic_Text_Popup_C::GetDefaultObj()
{
	static class UWBP_Generic_Text_Popup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Generic_Text_Popup_C*>(UWBP_Generic_Text_Popup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Generic_Text_Popup.WBP_Generic_Text_Popup_C.UpdateDetails
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Generic_Text_Popup_C::UpdateDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Generic_Text_Popup_C", "UpdateDetails");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Generic_Text_Popup.WBP_Generic_Text_Popup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Generic_Text_Popup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Generic_Text_Popup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Generic_Text_Popup.WBP_Generic_Text_Popup_C.BndEvt__WBP_RecipeDetails_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Generic_Text_Popup_C::BndEvt__WBP_RecipeDetails_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Generic_Text_Popup_C", "BndEvt__WBP_RecipeDetails_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Generic_Text_Popup_C_BndEvt__WBP_RecipeDetails_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Generic_Text_Popup.WBP_Generic_Text_Popup_C.ExecuteUbergraph_WBP_Generic_Text_Popup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Generic_Text_Popup_C::ExecuteUbergraph_WBP_Generic_Text_Popup(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Generic_Text_Popup_C", "ExecuteUbergraph_WBP_Generic_Text_Popup");

	Params::UWBP_Generic_Text_Popup_C_ExecuteUbergraph_WBP_Generic_Text_Popup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


