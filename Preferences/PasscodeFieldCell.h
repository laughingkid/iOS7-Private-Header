/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSTableCell.h"


#import "PSPasscodeFieldDelegate.h"

#import "UIKeyInput.h"



@class PSPasscodeField;



@interface PasscodeFieldCell : PSTableCell <UIKeyInput, PSPasscodeFieldDelegate>

{

    PSPasscodeField *_passcodeField;

    id <KeychainSyncPasscodeFieldDelegate> _delegate;

}



- (void)_setSecureTextEntry:(_Bool)arg1;

- (void)dealloc;

@property(nonatomic) id <KeychainSyncPasscodeFieldDelegate> delegate; // @synthesize delegate=_delegate;

- (void)deleteBackward;

- (_Bool)hasText;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

- (void)insertText:(id)arg1;

@property(nonatomic) long long keyboardType;

- (void)layoutSubviews;

- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;

- (id)passcodeText;

- (void)setPasscodeText:(id)arg1;



// Remaining properties

@property(nonatomic) long long autocapitalizationType;

@property(nonatomic) long long autocorrectionType;

@property(nonatomic) _Bool enablesReturnKeyAutomatically;

@property(nonatomic) long long keyboardAppearance;

@property(nonatomic) long long returnKeyType;

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;

@property(nonatomic) long long spellCheckingType;



@end


