/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "RUIObjectModelDelegate.h"



@class AAAutoAccountVerifier, AASetupAssistantService, NSMutableArray, RUILoader, UIAlertView, UINavigationController;



@interface AAUIAccountCreationRemoteUI : NSObject <RUIObjectModelDelegate>

{

    _Bool _isModal;

    RUILoader *_loader;

    NSMutableArray *_objectModels;

    id <AAUIAccountCreationDelegate> _delegate;

    UINavigationController *_parentNavController;

    UINavigationController *_createAccountNavController;

    UIAlertView *_tcConfirmationAlert;

    UIAlertView *_failedToCreateAccountAlert;

    _Bool _over13;

    AASetupAssistantService *_aaService;

    AAAutoAccountVerifier *_verifier;

}



- (void).cxx_destruct;

- (void)_addHeadersToRequest:(id)arg1;

- (void)_cleanupCreateAppleID:(id)arg1;

- (void)_cleanupLoader;

- (void)_createAppleAccount;

- (void)_displayConnectionErrorAndDismiss;

- (void)_popObjectModelAnimated:(_Bool)arg1;

- (void)_userAgreedToTCs:(_Bool)arg1;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (void)dealloc;

- (id)initWithNavController:(id)arg1 isModal:(_Bool)arg2;

- (void)loadURLRequest:(id)arg1;

- (void)loader:(id)arg1 didFailWithError:(id)arg2;

- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;

- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;

- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;

- (void)objectModelDidChange:(id)arg1;

- (void)objectModelPressedBack:(id)arg1;

- (id)parentViewControllerForObjectModel:(id)arg1;

- (void)setDelegate:(id)arg1;

- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;



@end

