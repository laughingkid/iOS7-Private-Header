/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextCommand.h"


@class TSWPCharacterStyle;



__attribute__((visibility("hidden")))

@interface TSWPCharacterStyleCommand : TSWPTextCommand

{

    TSWPCharacterStyle *_characterStyle;

}



- (id)actionString;

- (void)dealloc;

- (void)doCommit;

- (void)doUndoRedo;

- (id)initWithStorage:(id)arg1 selection:(id)arg2 characterStyle:(id)arg3;

- (int)persistenceKind;



@end


