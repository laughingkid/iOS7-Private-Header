/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


@class NSMutableArray, NSString;



__attribute__((visibility("hidden")))

@interface TSKReplaceAllCommand : TSKCommand

{

    NSMutableArray *_commands;

    NSString *_findString;

    NSString *_replaceString;

    unsigned long long _options;

    unsigned long long _countOfItemsReplaced;

}



- (void)commit;

@property(nonatomic) unsigned long long countOfItemsReplaced; // @synthesize countOfItemsReplaced=_countOfItemsReplaced;

- (void)dealloc;

@property(readonly, nonatomic) NSString *findString; // @synthesize findString=_findString;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithDocumentRoot:(id)arg1 findString:(id)arg2 replaceString:(id)arg3 options:(unsigned long long)arg4;

@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;

- (_Bool)process;

- (void)redo;

@property(readonly, nonatomic) NSString *replaceString; // @synthesize replaceString=_replaceString;

- (void)saveToArchiver:(id)arg1;

- (void)undo;



@end


