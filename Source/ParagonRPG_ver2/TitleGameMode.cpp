#include "TitleGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

ATitleGameMode::ATitleGameMode()
{
	PlayerControllerClass = APlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<UUserWidget> MainwidgetClass(TEXT("/Game/2_UI/Title/WB_Title"));
	if (MainwidgetClass.Succeeded())
	{
		m_mainWidget = CreateWidget(GetWorld(), MainwidgetClass.Class);
	}
}

void ATitleGameMode::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;
}

void ATitleGameMode::OnStartGame()
{
	UGameplayStatics::OpenLevel(this, TEXT("Village"));
}

void ATitleGameMode::OnSettings()
{

}

void ATitleGameMode::OnExitGame()
{
	FPlatformMisc::RequestExit(true);
}