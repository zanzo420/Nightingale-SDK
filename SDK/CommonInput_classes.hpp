#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// Class CommonInput.CommonInputActionDomain
class UCommonInputActionDomain : public UDataAsset
{
public:
	enum class ECommonInputEventFlowBehavior     Behavior;                                          // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonInputEventFlowBehavior     InnerBehavior;                                     // 0x34(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseActionDomainDesiredInputConfig;                // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonInputMode                  InputMode;                                         // 0x39(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMouseCaptureMode                 MouseCaptureMode;                                  // 0x3A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E9E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonInputActionDomain* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class CommonInput.CommonInputActionDomainTable
class UCommonInputActionDomainTable : public UDataAsset
{
public:
	TArray<class UCommonInputActionDomain*>      ActionDomains;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class ECommonInputMode                  InputMode;                                         // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMouseCaptureMode                 MouseCaptureMode;                                  // 0x41(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EA1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonInputActionDomainTable* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class CommonInput.CommonUIInputData
class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                   DefaultClickAction;                                // 0x28(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DefaultBackAction;                                 // 0x38(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonUIHoldData>       DefaultHoldData;                                   // 0x48(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          EnhancedInputClickAction;                          // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          EnhancedInputBackAction;                           // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonUIInputData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class CommonInput.CommonUIHoldData
class UCommonUIHoldData : public UObject
{
public:
	struct FInputHoldData                        KeyboardAndMouse;                                  // 0x28(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputHoldData                        Gamepad;                                           // 0x30(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputHoldData                        Touch;                                             // 0x38(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonUIHoldData* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class CommonInput.CommonInputBaseControllerData
class UCommonInputBaseControllerData : public UObject
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3017[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GamepadName;                                       // 0x2C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3019[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GamepadDisplayName;                                // 0x38(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  GamepadCategory;                                   // 0x50(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  GamepadPlatformName;                               // 0x68(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FInputDeviceIdentifierPair>    GamepadHardwareIdMapping;                          // 0x80(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ControllerTexture;                                 // 0x90(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ControllerButtonMaskTexture;                       // 0xB8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap;                                 // 0xE0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                                 // 0xF0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonInputBaseControllerData* GetDefaultObj();

	TArray<class FName> GetRegisteredGamepads();
};

// 0x30 (0x70 - 0x40)
// Class CommonInput.CommonInputPlatformSettings
class UCommonInputPlatformSettings : public UPlatformSettings
{
public:
	enum class ECommonInputType                  DefaultInputType;                                  // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMouseAndKeyboard;                         // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTouch;                                    // 0x42(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsGamepad;                                  // 0x43(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DefaultGamepadName;                                // 0x44(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanChangeGamepadType;                             // 0x4C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3022[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UCommonInputBaseControllerData>> ControllerData;                                    // 0x50(0x10)(Edit, ZeroConstructor, Config, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;                             // 0x60(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonInputPlatformSettings* GetDefaultObj();

};

// 0xE8 (0x120 - 0x38)
// Class CommonInput.CommonInputSettings
class UCommonInputSettings : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UCommonUIInputData>      InputData;                                         // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPerPlatformSettings                  PlatformInput;                                     // 0x60(0x10)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData;                           // 0x70(0x50)(Config, Deprecated, NativeAccessSpecifierPrivate)
	bool                                         bEnableInputMethodThrashingProtection;             // 0xC0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3029[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputMethodThrashingLimit;                         // 0xC4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       InputMethodThrashingWindowInSeconds;               // 0xC8(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       InputMethodThrashingCooldownInSeconds;             // 0xD0(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowOutOfFocusDeviceInput;                       // 0xD8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableDefaultInputConfig;                         // 0xD9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableEnhancedInputSupport;                       // 0xDA(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_302A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCommonInputActionDomainTable> ActionDomainTable;                                 // 0xE0(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_302B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonUIInputData>        InputDataClass;                                    // 0x110(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonInputActionDomainTable*         ActionDomainTablePtr;                              // 0x118(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonInputSettings* GetDefaultObj();

	bool IsEnhancedInputSupportEnabled();
};

// 0xE8 (0x118 - 0x30)
// Class CommonInput.CommonInputSubsystem
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_304C[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInputMethodChanged;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	int32                                        NumberOfInputMethodChangesRecently;                // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_304D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastInputMethodChangeTime;                         // 0x80(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       LastTimeInputMethodThrashingBegan;                 // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputType                  LastInputType;                                     // 0x90(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputType                  CurrentInputType;                                  // 0x91(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_304E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GamepadInputType;                                  // 0x94(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_304F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, enum class ECommonInputType> CurrentInputLocks;                                 // 0xA0(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3050[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputActionDomainTable*         ActionDomainTable;                                 // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsGamepadSimulatedClick;                          // 0x100(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3051[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonInputSubsystem* GetDefaultObj();

	bool ShouldShowInputKeys();
	void SetGamepadInputType(class FName InGamepadInputType);
	void SetCurrentInputType(enum class ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	bool IsInputMethodActive(enum class ECommonInputType InputMethod);
	enum class ECommonInputType GetDefaultInputType();
	enum class ECommonInputType GetCurrentInputType();
	class FName GetCurrentGamepadName();
	void BroadcastInputMethodChanged();
};

}


