#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
// (None)

class UClass* UMoviePipelineBurnInWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineBurnInWidget");

	return Clss;
}


// MoviePipelineBurnInWidget MovieRenderPipelineSettings.Default__MoviePipelineBurnInWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineBurnInWidget* UMoviePipelineBurnInWidget::GetDefaultObj()
{
	static class UMoviePipelineBurnInWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineBurnInWidget*>(UMoviePipelineBurnInWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              ForPipeline                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBurnInWidget::OnOutputFrameStarted(class UMoviePipeline* ForPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBurnInWidget", "OnOutputFrameStarted");

	Params::UMoviePipelineBurnInWidget_OnOutputFrameStarted_Params Parms{};

	Parms.ForPipeline = ForPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
// (None)

class UClass* UMoviePipelineBurnInSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineBurnInSetting");

	return Clss;
}


// MoviePipelineBurnInSetting MovieRenderPipelineSettings.Default__MoviePipelineBurnInSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineBurnInSetting* UMoviePipelineBurnInSetting::GetDefaultObj()
{
	static class UMoviePipelineBurnInSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineBurnInSetting*>(UMoviePipelineBurnInSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
// (None)

class UClass* UMoviePipelineConsoleVariableSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineConsoleVariableSetting");

	return Clss;
}


// MoviePipelineConsoleVariableSetting MovieRenderPipelineSettings.Default__MoviePipelineConsoleVariableSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineConsoleVariableSetting* UMoviePipelineConsoleVariableSetting::GetDefaultObj()
{
	static class UMoviePipelineConsoleVariableSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineConsoleVariableSetting*>(UMoviePipelineConsoleVariableSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.UpdateConsoleVariableEnableState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState(const class FString& Name, bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "UpdateConsoleVariableEnableState");

	Params::UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Params Parms{};

	Parms.Name = Name;
	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.RemoveConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRemoveAllInstances                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable(const class FString& Name, bool bRemoveAllInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "RemoveConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Params Parms{};

	Parms.Name = Name;
	Parms.bRemoveAllInstances = bRemoveAllInstances;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.GetConsoleVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMoviePipelineConsoleVariableEntry>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMoviePipelineConsoleVariableEntry> UMoviePipelineConsoleVariableSetting::GetConsoleVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "GetConsoleVariables");

	Params::UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddOrUpdateConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineConsoleVariableSetting::AddOrUpdateConsoleVariable(const class FString& Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "AddOrUpdateConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineConsoleVariableSetting::AddConsoleVariable(const class FString& Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConsoleVariableSetting", "AddConsoleVariable");

	Params::UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
// (None)

class UClass* UMoviePipelineWidgetRenderer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineWidgetRenderer");

	return Clss;
}


// MoviePipelineWidgetRenderer MovieRenderPipelineSettings.Default__MoviePipelineWidgetRenderer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineWidgetRenderer* UMoviePipelineWidgetRenderer::GetDefaultObj()
{
	static class UMoviePipelineWidgetRenderer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineWidgetRenderer*>(UMoviePipelineWidgetRenderer::StaticClass()->DefaultObject);

	return Default;
}

}


