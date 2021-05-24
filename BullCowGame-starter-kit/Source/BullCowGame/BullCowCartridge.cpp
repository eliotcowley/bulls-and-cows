// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    SetupGame();

    // Debug line
    PrintLine(TEXT("The hidden word is: %s."), *HiddenWord);
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else // Check player guess
    {
        ProcessGuess(Input);
    }
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cakes");
    Lives = HiddenWord.Len();
    bGameOver = false;

    // Welcome the player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the %i-letter word."), HiddenWord.Len());
    PrintLine(TEXT("You have %i lives."), Lives);
    PrintLine(TEXT("Type in your guess and\npress Enter to continue."));
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;    
    PrintLine(TEXT("Press Enter to play again."));
}

void UBullCowCartridge::ProcessGuess(FString Guess)
{
    // Check if isogram
    // Prompt to guess again
    // Check right number of characters
    // Prompt to guess again

    // Remove life

    // Check if Lives > 0
    // If yes, guess again
    // Show lives left
    // If no, show game over and hidden word
    // Prompt to play again, press Enter to play again
    // Check user input
    // Play again or quit

    if (Guess == HiddenWord)
    {
        PrintLine(TEXT("You got it!"));
        EndGame();
        return;
    }

    --Lives;
    PrintLine(TEXT("Oops, wrong guess."));
    PrintLine(TEXT("You have %i lives remaining."), Lives);

    if (Lives <= 0)
    {
        PrintLine(TEXT("You lose!"));
        PrintLine(TEXT("The hidden word was %s"), *HiddenWord);
        EndGame();
        return;
    }

    if (Guess.Len() != HiddenWord.Len())
    {
        PrintLine(TEXT("The hidden word is %i characters long."), HiddenWord.Len());
    }    
}