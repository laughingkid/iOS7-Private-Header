/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UINavigationController.h"



@class GKHostedTurnBasedViewController, GKMatchRequest, GKRemoteTurnBasedViewController;



@interface GKTurnBasedMatchmakerViewController : UINavigationController

{

    _Bool _showExistingMatches;

    id <GKTurnBasedMatchmakerViewControllerDelegate> _turnBasedMatchmakerDelegateWeak;

    GKHostedTurnBasedViewController *_hostedViewController;

    GKRemoteTurnBasedViewController *_remoteViewController;

    GKMatchRequest *_matchRequest;

}



+ (_Bool)_preventsAppearanceProxyCustomization;

- (void)_setupChildViewController;

- (void)authenticationChanged:(id)arg1;

- (void)cancel;

- (void)dealloc;

- (void)finishWithError:(id)arg1;

- (void)finishWithMatch:(id)arg1;

@property(retain, nonatomic) GKHostedTurnBasedViewController *hostedViewController; // @synthesize hostedViewController=_hostedViewController;

- (id)init;

- (id)initWithMatchRequest:(id)arg1;

- (void)loadView;

@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;

- (void)playerQuitMatch:(id)arg1;

@property(retain, nonatomic) GKRemoteTurnBasedViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;

@property(nonatomic) _Bool showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;

@property(nonatomic) id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate; // @synthesize turnBasedMatchmakerDelegate=_turnBasedMatchmakerDelegateWeak;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (unsigned long long)supportedInterfaceOrientations;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end

