#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Button_Tab.WBP_Button_Tab_C
// (None)

class UClass* UWBP_Button_Tab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Button_Tab_C");

	return Clss;
}


// WBP_Button_Tab_C WBP_Button_Tab.Default__WBP_Button_Tab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Button_Tab_C* UWBP_Button_Tab_C::GetDefaultObj()
{
	static class UWBP_Button_Tab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Button_Tab_C*>(UWBP_Button_Tab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Button_Tab.WBP_Button_Tab_C.OnButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Tab_C::OnButtonClicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Tab_C", "OnButtonClicked");

	Params::UWBP_Button_Tab_C_OnButtonClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_Tab.WBP_Button_Tab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Button_Tab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Tab_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Button_Tab.WBP_Button_Tab_C.ExecuteUbergraph_WBP_Button_Tab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Tab_C::ExecuteUbergraph_WBP_Button_Tab(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Tab_C", "ExecuteUbergraph_WBP_Button_Tab");

	Params::UWBP_Button_Tab_C_ExecuteUbergraph_WBP_Button_Tab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Button_Tab.WBP_Button_Tab_C.TabClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Button_Tab_C::TabClicked__DelegateSignature(class FText Name, int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Button_Tab_C", "TabClicked__DelegateSignature");

	Params::UWBP_Button_Tab_C_TabClicked__DelegateSignature_Params Parms{};

	Parms.Name = Name;
	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


