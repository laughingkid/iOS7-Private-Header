/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VSRecognitionAction.h"


@class NSURL;



@interface VSRecognitionURLAction : VSRecognitionAction

{

    NSURL *_url;

}



- (id)URL;

- (int)completionType;

- (void)dealloc;

- (id)perform;

- (void)setURL:(id)arg1;



@end


