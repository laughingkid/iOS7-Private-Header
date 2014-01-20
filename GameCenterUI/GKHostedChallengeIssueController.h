/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKHostedViewController.h"


@class GKChallenge, NSArray, NSString;



@interface GKHostedChallengeIssueController : GKHostedViewController

{

    _Bool _forcePicker;

    NSArray *_playerIDs;

    NSString *_defaultMessage;

    GKChallenge *_challenge;

    id _completionHandler;

    id _dismissCompletionHandler;

}



+ (_Bool)_preventsAppearanceProxyCustomization;

+ (id)hostedIssueControllerWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;

+ (void)presentHostedIssueControllerWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3;

+ (id)presentationQueue;

- (id)_remote;

- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;

@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;

- (void)dealloc;

@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;

@property(copy, nonatomic) id dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;

- (void)doneWithPlayers:(id)arg1 message:(id)arg2;

@property(nonatomic) _Bool forcePicker; // @synthesize forcePicker=_forcePicker;

- (id)hostSideViewControllerClassName;

- (id)initWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;

@property(retain, nonatomic) NSArray *playerIDs; // @synthesize playerIDs=_playerIDs;

- (id)serviceSideViewControllerClassName;

- (_Bool)shouldAutomaticallyForwardAppearanceMethods;

- (_Bool)shouldAutomaticallyForwardRotationMethods;



@end

