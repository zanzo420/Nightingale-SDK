#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C
// (Actor)

class UClass* ABP_CreatureProjectile_Fae_ReturningBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureProjectile_Fae_ReturningBlade_C");

	return Clss;
}


// BP_CreatureProjectile_Fae_ReturningBlade_C BP_CreatureProjectile_Fae_ReturningBlade.Default__BP_CreatureProjectile_Fae_ReturningBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureProjectile_Fae_ReturningBlade_C* ABP_CreatureProjectile_Fae_ReturningBlade_C::GetDefaultObj()
{
	static class ABP_CreatureProjectile_Fae_ReturningBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureProjectile_Fae_ReturningBlade_C*>(ABP_CreatureProjectile_Fae_ReturningBlade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.GetInstigatorReturnComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Bound_FaeAssassin_C*K2Node_DynamicCast_AsBP_Creature_Bound_Fae_Assassin              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureProjectile_Fae_ReturningBlade_C::GetInstigatorReturnComponent(class USceneComponent** Component, class ABP_Creature_Bound_FaeAssassin_C* K2Node_DynamicCast_AsBP_Creature_Bound_Fae_Assassin, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "GetInstigatorReturnComponent");

	Params::ABP_CreatureProjectile_Fae_ReturningBlade_C_GetInstigatorReturnComponent_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Creature_Bound_Fae_Assassin = K2Node_DynamicCast_AsBP_Creature_Bound_Fae_Assassin;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.ValidateImpactDetection
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ValidTraceImpact                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetTraceImpactDetectionData_TraceHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceImpactDetectionData_TraceHitVelocity            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidateImpactDetection_ValidTraceImpact                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureProjectile_Fae_ReturningBlade_C::ValidateImpactDetection(bool* ValidTraceImpact, const struct FGameplayTag& Temp_struct_Variable, const struct FHitResult& CallFunc_GetTraceImpactDetectionData_TraceHitResult, double CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact, const struct FVector& CallFunc_GetTraceImpactDetectionData_TraceHitVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ValidateImpactDetection_ValidTraceImpact, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "ValidateImpactDetection");

	Params::ABP_CreatureProjectile_Fae_ReturningBlade_C_ValidateImpactDetection_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetTraceImpactDetectionData_TraceHitResult = CallFunc_GetTraceImpactDetectionData_TraceHitResult;
	Parms.CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact = CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact;
	Parms.CallFunc_GetTraceImpactDetectionData_TraceHitVelocity = CallFunc_GetTraceImpactDetectionData_TraceHitVelocity;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_ValidateImpactDetection_ValidTraceImpact = CallFunc_ValidateImpactDetection_ValidTraceImpact;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidTraceImpact != nullptr)
		*ValidTraceImpact = Parms.ValidTraceImpact;

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureProjectile_Fae_ReturningBlade_C::Initialize(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "Initialize");

	Params::ABP_CreatureProjectile_Fae_ReturningBlade_C_Initialize_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.HandleLaunched
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CreatureProjectile_Fae_ReturningBlade_C::HandleLaunched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "HandleLaunched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.HandleServiceHomingPassedTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureProjectile_Fae_ReturningBlade_C::HandleServiceHomingPassedTarget(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "HandleServiceHomingPassedTarget");

	Params::ABP_CreatureProjectile_Fae_ReturningBlade_C_HandleServiceHomingPassedTarget_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.HandleServiceMaxFlightDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             CallFunc_GetInstigatorReturnComponent_Component                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureProjectile_Fae_ReturningBlade_C::HandleServiceMaxFlightDistance(class USceneComponent* CallFunc_GetInstigatorReturnComponent_Component, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "HandleServiceMaxFlightDistance");

	Params::ABP_CreatureProjectile_Fae_ReturningBlade_C_HandleServiceMaxFlightDistance_Params Parms{};

	Parms.CallFunc_GetInstigatorReturnComponent_Component = CallFunc_GetInstigatorReturnComponent_Component;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.ValidatePassthrough
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ValidPassthrough                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetTraceImpactDetectionData_TraceHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceImpactDetectionData_TraceHitVelocity            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureProjectile_Fae_ReturningBlade_C::ValidatePassthrough(bool* ValidPassthrough, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FHitResult& CallFunc_GetTraceImpactDetectionData_TraceHitResult, double CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact, const struct FVector& CallFunc_GetTraceImpactDetectionData_TraceHitVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "ValidatePassthrough");

	Params::ABP_CreatureProjectile_Fae_ReturningBlade_C_ValidatePassthrough_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetTraceImpactDetectionData_TraceHitResult = CallFunc_GetTraceImpactDetectionData_TraceHitResult;
	Parms.CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact = CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact;
	Parms.CallFunc_GetTraceImpactDetectionData_TraceHitVelocity = CallFunc_GetTraceImpactDetectionData_TraceHitVelocity;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidPassthrough != nullptr)
		*ValidPassthrough = Parms.ValidPassthrough;

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.OnDamageReceived
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_CreatureProjectile_Fae_ReturningBlade_C::OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "OnDamageReceived");

	Params::ABP_CreatureProjectile_Fae_ReturningBlade_C_OnDamageReceived_Params Parms{};

	Parms.Damage = Damage;
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.ExecuteUbergraph_BP_CreatureProjectile_Fae_ReturningBlade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Source                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_EffectTags                                          (ConstParm)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          K2Node_Event_TagValueContainer                                   (ConstParm)

void ABP_CreatureProjectile_Fae_ReturningBlade_C::ExecuteUbergraph_BP_CreatureProjectile_Fae_ReturningBlade(int32 EntryPoint, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "ExecuteUbergraph_BP_CreatureProjectile_Fae_ReturningBlade");

	Params::ABP_CreatureProjectile_Fae_ReturningBlade_C_ExecuteUbergraph_BP_CreatureProjectile_Fae_ReturningBlade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_Source = K2Node_Event_Source;
	Parms.K2Node_Event_EffectTags = K2Node_Event_EffectTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_TagValueContainer = K2Node_Event_TagValueContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureProjectile_Fae_ReturningBlade.BP_CreatureProjectile_Fae_ReturningBlade_C.OnDefused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CreatureProjectile_Fae_ReturningBlade_C::OnDefused__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_Fae_ReturningBlade_C", "OnDefused__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


