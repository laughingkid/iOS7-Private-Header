/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PKPassField.h"


@class NSString;



@interface PKPassNumberField : PKPassField

{

    NSString *_currencyCode;

    long long _numberStyle;

}



+ (_Bool)supportsSecureCoding;

@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) long long numberStyle; // @synthesize numberStyle=_numberStyle;

- (id)value;



@end


