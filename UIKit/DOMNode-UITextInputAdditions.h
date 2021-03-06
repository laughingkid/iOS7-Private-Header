/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMNode.h"



#import "UIKeyInput.h"

#import "UIKeyboardInput.h"

#import "UITextInputPrivate.h"

#import "UITextInputTokenizer.h"



@class NSDictionary, UIColor, UIImage, UITextInteractionAssistant, UITextPosition, UITextRange, UIView;



@interface DOMNode (UITextInputAdditions) <UIKeyboardInput, UITextInputPrivate, UIKeyInput, UITextInputTokenizer>

- (struct CGRect)_lastRectForRange:(id)arg1;

- (id)_textSelectingContainer;

- (void)acceptedAutoFillWord:(id)arg1;

- (id)automaticallySelectedOverlay;

- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;

- (_Bool)becomesEditableWithGestures;

- (void)beginSelectionChange;

@property(readonly, nonatomic) UITextPosition *beginningOfDocument;

- (struct CGRect)caretRect;

- (struct CGRect)caretRectForPosition:(id)arg1;

- (unsigned short)characterAfterCaretSelection;

- (unsigned short)characterInRelationToCaretSelection:(int)arg1;

- (id)characterRangeAtPoint:(struct CGPoint)arg1;

- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;

- (void)clearMarkedText;

- (id)closestPositionToPoint:(struct CGPoint)arg1;

- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;

- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;

- (void)confirmMarkedText:(id)arg1;

- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;

- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1 withInset:(double)arg2;

- (id)content;

@property(nonatomic) _Bool contentsIsSingleValue;

- (struct CGRect)convertCaretRect:(struct CGRect)arg1;

- (id)delegate;

- (void)deleteBackward;

- (_Bool)editable;

- (_Bool)editing;

@property(readonly, nonatomic) UITextPosition *endOfDocument;

- (void)endSelectionChange;

- (void)extendCurrentSelection:(int)arg1;

- (struct CGRect)firstRectForRange:(id)arg1;

- (id)fontForCaretSelection;

- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;

- (void)handleKeyWebEvent:(id)arg1;

- (_Bool)hasContent;

- (_Bool)hasSelection;

- (_Bool)hasText;

- (int)initialSelectionBehavior;

@property(nonatomic) id <UITextInputDelegate> inputDelegate;

- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;

- (id)insertDictationResultPlaceholder;

- (void)insertText:(id)arg1;

@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;

- (_Bool)isAutoFillMode;

- (_Bool)isEditable;

- (_Bool)isEditing;

- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;

- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;

- (_Bool)isShowingPlaceholder;

@property(readonly, nonatomic) UITextRange *markedTextRange;

@property(copy, nonatomic) NSDictionary *markedTextStyle;

- (id)metadataDictionariesForDictationResults;

- (void)moveDown;

- (void)moveLeft;

- (void)moveRight;

- (void)moveUp;

- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;

- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;

- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;

- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;

- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;

- (id)rangeByExtendingCurrentSelection:(int)arg1;

- (id)rangeByMovingCurrentSelection:(int)arg1;

- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

- (id)rangeOfEnclosingWord:(id)arg1;

- (id)rectsForNSRange:(struct _NSRange)arg1;

- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;

- (void)replaceCurrentWordWithText:(id)arg1;

- (void)replaceRange:(id)arg1 withText:(id)arg2;

- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(_Bool)arg3;

- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;

- (_Bool)requiresKeyEvents;

@property(nonatomic) long long returnKeyType;

- (void)selectAll;

@property(copy) UITextRange *selectedTextRange;

@property(nonatomic) long long selectionAffinity;

- (_Bool)selectionAtDocumentStart;

- (_Bool)selectionAtWordStart;

- (struct _NSRange)selectionRange;

- (id)selectionRectsForRange:(id)arg1;

- (int)selectionState;

- (id)selectionView;

- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;

- (void)setBecomesEditableWithGestures:(_Bool)arg1;

- (void)setInitialSelectionBehavior:(int)arg1;

- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;

- (void)setSecure:(_Bool)arg1;

- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;

- (void)setSelectionWithPoint:(struct CGPoint)arg1;

- (void)setSelectionWithPoint:(struct CGPoint)arg1 inset:(double)arg2;

- (void)setText:(id)arg1;

@property(nonatomic) int textLoupeVisibility;

@property(nonatomic) id textSuggestionDelegate;

@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;

- (void)setupPlaceholderTextIfNeeded;

- (void)takeTraitsFrom:(id)arg1;

- (id)text;

- (id)textColorForCaretSelection;

- (id)textDocument;

- (id)textInRange:(id)arg1;

- (id)textInputTraits;

- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;

@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

- (id)uiWebDocumentView;

- (void)unmarkText;

- (void)updateAutoscroll:(id)arg1;

- (void)updateSelection;

- (int)wordOffsetInRange:(id)arg1;



// Remaining properties

@property(nonatomic) _Bool acceptsEmoji;

@property(nonatomic) _Bool acceptsFloatingKeyboard;

@property(nonatomic) _Bool acceptsSplitKeyboard;

@property(nonatomic) long long autocapitalizationType;

@property(nonatomic) long long autocorrectionType;

@property(nonatomic) _Bool deferBecomingResponder;

@property(nonatomic) _Bool displaySecureTextUsingPlainText;

@property(nonatomic) int emptyContentReturnKeyType;

@property(nonatomic) _Bool enablesReturnKeyAutomatically;

@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;

@property(nonatomic) _Bool forceEnableDictation;

@property(retain, nonatomic) UIColor *insertionPointColor;

@property(nonatomic) unsigned long long insertionPointWidth;

@property(nonatomic) _Bool isSingleLineDocument;

@property(nonatomic) long long keyboardAppearance;

@property(nonatomic) long long keyboardType;

@property(nonatomic) _Bool learnsCorrections;

@property(nonatomic) _Bool returnKeyGoesToNextResponder;

@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;

@property(retain, nonatomic) UIColor *selectionBarColor;

@property(retain, nonatomic) UIImage *selectionDragDotImage;

@property(nonatomic) long long selectionGranularity;

@property(retain, nonatomic) UIColor *selectionHighlightColor;

@property(nonatomic) int shortcutConversionType;

@property(nonatomic) long long spellCheckingType;

@property(nonatomic) _Bool suppressReturnKeyStyling;

@property(readonly, nonatomic) UIView *textInputView;

@property(nonatomic) int textSelectionBehavior;

@property(nonatomic) _Bool useInterfaceLanguageForLocalization;

@end


