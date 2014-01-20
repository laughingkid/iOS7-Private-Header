/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKActivityProxyRemoteViewController.h"


#import "GameCenterUIServiceViewControllerDelegate.h"



@class GKGame, GKGameCenterViewController, NSString;



@interface GKRemoteGameCenterViewController : GKActivityProxyRemoteViewController <GameCenterUIServiceViewControllerDelegate>

{

    _Bool _shouldDisplayChallengePlayButton;

    GKGameCenterViewController *_delegateWeak;

    long long _viewState;

    NSString *_leaderboardIdentifier;

    long long _leaderboardTimeScope;

}



+ (id)exportedInterface;

+ (id)serviceViewControllerInterface;

- (_Bool)_dismissSelfAfterGettingShouldFinish;

- (void)dealloc;

@property(nonatomic) GKGameCenterViewController *delegate; // @synthesize delegate=_delegateWeak;

- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(id)arg1;

@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;

@property(nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;

- (id)observedKeyPaths;

- (void)playPressedForChallenge:(id)arg1;

- (void)remoteControllerDidChangeViewState:(id)arg1;

- (void)remoteControllerDidSelectLeaderboardIdentifier:(id)arg1;

- (void)remoteControllerDidSelectLeaderboardTimeScope:(id)arg1;

- (void)remoteViewControllerIsCanceling;

- (void)remoteViewControllerIsFinishing;

- (void)setAPIControllerFlags:(CDStruct_b31ca263)arg1;

- (void)setNilValueForKey:(id)arg1;

@property(nonatomic) _Bool shouldDisplayChallengePlayButton; // @synthesize shouldDisplayChallengePlayButton=_shouldDisplayChallengePlayButton;

@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;



// Remaining properties

@property(retain, nonatomic) GKGame *game;



@end

