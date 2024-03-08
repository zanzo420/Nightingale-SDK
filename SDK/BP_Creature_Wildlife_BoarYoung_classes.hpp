#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E (0x1668 - 0x161A)
// BlueprintGeneratedClass BP_Creature_Wildlife_BoarYoung.BP_Creature_Wildlife_BoarYoung_C
class ABP_Creature_Wildlife_BoarYoung_C : public ABP_Creature_Wildlife_C
{
public:
	uint8                                        Pad_5BD1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     WP_Indicator1;                                     // 0x1620(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WP_Indicator;                                      // 0x1628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Heart;                                             // 0x1630(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_RearRight;                                 // 0x1638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_RearLeft;                                  // 0x1640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Right;                                     // 0x1648(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Left;                                      // 0x1650(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x1658(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x1660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Wildlife_BoarYoung_C* GetDefaultObj();

	void Start_WP_Indicator();
};

}


