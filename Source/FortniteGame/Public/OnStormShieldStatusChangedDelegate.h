#pragma once
#include "CoreMinimal.h"
#include "OnStormShieldStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStormShieldStatusChanged, bool, bInStorm);

