/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSFormatter.h"



@class NSNumberFormatter;



__attribute__((visibility("hidden")))

@interface TSUNumberOrDateOrDurationFormatter : NSFormatter

{

    NSNumberFormatter *mNumberFormatter;

}



- (void)dealloc;

- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;

- (id)init;

- (id)stringForObjectValue:(id)arg1;



@end

