/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABPropertySimpleCell.h"


@class NSString;



@interface ABPropertyPhoneNumberCell : ABPropertySimpleCell

{

    NSString *_previousValue;

}



- (void)dealloc;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (_Bool)shouldPerformDefaultAction;

- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;

- (void)updateTransportButtons;



@end

