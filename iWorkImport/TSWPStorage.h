/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TSDContainerInfo.h"

#import "TSKSearchable.h"

#import "TSSStyleClient.h"

#import "TSSThemedObject.h"

#import "TSWPStorageParent.h"

#import "TSWPTextSource.h"



@class NSMutableString, NSObject<TSDContainerInfo>, TSDInfoGeometry, TSKDocumentRoot, TSPObject<TSDOwningAttachment>, TSSStylesheet, TSWPStorageBroadcaster;



__attribute__((visibility("hidden")))

@interface TSWPStorage : TSPObject <TSDContainerInfo, TSKSearchable, TSSThemedObject, TSWPStorageParent, TSSStyleClient, TSWPTextSource>

{

    NSObject<TSDContainerInfo> *_parentInfo;

    TSPObject<TSDOwningAttachment> *_owningAttachment;

    NSMutableString *_string;

    struct TSWPAttributeArray *_attributesTable[19];

    TSWPStorageBroadcaster *_broadcaster;

    TSKDocumentRoot *_documentRoot;

    TSSStylesheet *_stylesheet;

    int _WPKind;

    unsigned int _disallowElementKinds;

    _Bool _dolcSuppressed;

    _Bool _delayBroadcast;

    struct _NSRange _rangeToBroadcast;

    int _writingDirectionCache;

    _Bool _isInInit;

    unsigned long long _changeCount;

    _Bool _ignoreContentsChangedNotifications;

}



+ (_Bool)allowsElementKind:(int)arg1 forStorageKind:(int)arg2;

+ (struct TSWPAttributeArray *)createAttributeArrayForKind:(int)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;

+ (struct TSWPAttributeArray *)createEmptyAttributeArrayForKind:(int)arg1;

+ (id)filterMarkAttributes:(id)arg1;

+ (id)filterText:(id)arg1;

+ (id)filterText:(id)arg1 removingAttachments:(_Bool)arg2;

+ (void)initialize;

+ (id)newObjectForUnarchiver:(id)arg1;

+ (Class)pStringClassForWPKind:(int)arg1;

+ (id)plainTextPasteStringForStorages:(id)arg1 forcePlainText:(_Bool)arg2;

+ (void)resetDisallowedElementKinds;

+ (void)setDisallowedElementKinds:(unsigned int)arg1 forStorageKind:(int)arg2;

- (id).cxx_construct;

- (void)acceptVisitor:(id)arg1;

- (void)addAllDictationAndAutocorrectionKeyRangesInRange:(struct _NSRange)arg1 toRanges:(struct TSWPRangeVector *)arg2;

- (void)addDisallowedElementKind:(int)arg1;

- (void)addGlyphVariantData:(id)arg1 toRange:(struct _NSRange)arg2;

- (void)addObserver:(id)arg1;

- (void)addSmartField:(id)arg1 toRange:(struct _NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (_Bool)adjustRangesByDelta:(long long)arg1;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

- (_Bool)allowsElementKind:(int)arg1;

- (_Bool)anchoredDrawableAttachmentCharacterAtCharIndex:(unsigned long long)arg1;

- (void)appendSection:(id)arg1 charIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)appendStoragePreservingEmphasis:(id)arg1 dolcContext:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3 parentCommand:(id)arg4;

- (void)applyChange:(id)arg1 changeRange:(struct _NSRange)arg2 accept:(_Bool)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)applyChanges:(_Bool)arg1 inRange:(struct _NSRange)arg2 inSelectionRange:(struct _NSRange)arg3 outChangedRange:(struct _NSRange *)arg4 outSelectionRange:(struct _NSRange *)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 forceAll:(_Bool)arg7;

- (void)applyDataValue:(unsigned int)arg1 toParagraphIndexRange:(struct _NSRange)arg2 forKind:(int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)applyFlags:(unsigned short)arg1 level:(unsigned long long)arg2 toParagraphIndexRange:(struct _NSRange)arg3 forKind:(int)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;

- (void)applyFlags:(unsigned short)arg1 level:(unsigned long long)arg2 toParagraphsInCharRange:(struct _NSRange)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)applyObject:(id)arg1 toCharRange:(struct _NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;

- (void)applyObject:(id)arg1 toParagraphIndexRange:(struct _NSRange)arg2 forKind:(int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)applyObject:(id)arg1 toParagraphsInCharRange:(struct _NSRange)arg2 forKind:(int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)applyWritingDirection:(int)arg1 toParagraphIndexRange:(struct _NSRange)arg2 forKind:(int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (id)attachmentAtAttachmentIndex:(unsigned long long)arg1 outCharIndex:(unsigned long long *)arg2;

- (id)attachmentAtCharIndex:(unsigned long long)arg1;

- (unsigned long long)attachmentCount;

- (unsigned long long)attachmentIndexAtCharIndex:(unsigned long long)arg1;

- (unsigned long long)attachmentIndexForInsertionAtCharIndex:(unsigned long long)arg1;

- (struct _NSRange)attachmentIndexRangeForTextRange:(struct _NSRange)arg1;

- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;

- (struct _NSRange)attachmentRangeForCharIndex:(unsigned long long)arg1 forwards:(_Bool)arg2;

- (struct _NSRange)attachmentRangeForCharIndex:(unsigned long long)arg1 forwards:(_Bool)arg2 attributeKind:(int)arg3;

- (struct TSWPAttributeArray *)attributeArrayForKind:(int)arg1;

- (struct TSWPAttributeArray *)attributeArrayForKind:(int)arg1 withCreate:(_Bool)arg2 fromUndo:(_Bool)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (struct TSWPAttributeArray *)attributeArrayForKind:(int)arg1 withCreate:(_Bool)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(struct _NSRange *)arg4;

- (_Bool)autoListRecognition;

- (_Bool)autoListTermination;

- (unsigned long long)autoNumberFootnoteCountForRange:(struct _NSRange)arg1;

- (void)autoUpdateField:(id)arg1 withRange:(struct _NSRange)arg2 documentRoot:(id)arg3 returningInsertedRange:(struct _NSRange *)arg4;

- (void)autoUpdateSmartFieldsWithDocumentRoot:(id)arg1;

- (_Bool)beginsWithFormulaEqualsToken;

- (id)bestCharacterLanguageForTextRange:(struct _NSRange)arg1;

- (_Bool)canBeStoredInAStringValueCell;

- (_Bool)canPasteAsPlainText;

- (_Bool)canPasteAsPlainTextWithUniformParagraphs;

- (_Bool)canUserReplaceText;

- (void)capitalizeWithUndoTransaction:(struct TSWPStorageTransaction *)arg1 locale:(id)arg2;

- (id)changeAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;

- (id)changeAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;

@property(readonly, nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;

- (id)changeDetailsAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;

- (id)changeDetailsForChange:(id)arg1 withRange:(struct _NSRange)arg2;

- (void)changeViewSettingsDidChange;

- (_Bool)changesWithPageCount;

- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;

- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;

- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;

- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;

- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;

- (unsigned long long)characterCount;

- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)characterStyleAtCharIndex:(unsigned long long)arg1 left:(_Bool)arg2 effectiveRange:(struct _NSRange *)arg3;

- (unsigned long long)characterStyleAttributeCount;

- (id)childCommandForApplyThemeCommand:(id)arg1;

- (id)childCommandForReplaceAllCommand:(id)arg1;

- (id)childEnumerator;

- (id)childInfos;

- (id)columnStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)columnStyleAtColumnStyleIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (unsigned long long)columnStyleCount;

- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;

- (int)compareAttributeArray1:(struct TSWPAttributeArray *)arg1 array2:(struct TSWPAttributeArray *)arg2 range1:(struct _NSRange)arg3 range2:(struct _NSRange)arg4 attributeIndex1:(unsigned long long)arg5 attributeIndex2:(unsigned long long)arg6;

- (int)compareAttributeArray:(struct TSWPAttributeArray *)arg1 range:(struct _NSRange)arg2 otherStorage:(id)arg3 otherRange:(struct _NSRange)arg4;

- (int)compareRange:(struct _NSRange)arg1 otherStorage:(id)arg2 otherRange:(struct _NSRange)arg3 options:(unsigned long long)arg4;

- (void)compress:(struct TSWPStorageTransaction *)arg1;

- (void)compressAttributeArrayKind:(int)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;

@property(readonly, nonatomic) long long contentWritingDirection;

- (void)continueSearch:(id)arg1;

- (id)copyWithContext:(id)arg1;

- (struct __CTFont *)createFontAtCharIndex:(unsigned long long)arg1 scaleTextPercent:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3 styleProvider:(id)arg4;

- (void)dealloc;

- (id)debugDescription;

- (id)defaultSectionForContext:(id)arg1;

- (void)deleteRange:(struct _NSRange)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;

- (struct TSWPRangeVector)deletedRangeVectorInRange:(struct _NSRange)arg1;

- (id)deletedRangesInRange:(struct _NSRange)arg1;

@property(readonly, nonatomic) struct TSWPChangeAttributeArray *deletionChangesTable;

- (id)description;

- (id)dictationAndAutocorrectionKeyAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (unsigned int)disallowedElementKinds;

- (id)documentRoot;

- (id)editableAnnotationForInsertionPointSelection:(id)arg1 includeComments:(_Bool)arg2 withOutRange:(struct _NSRange *)arg3 selectionIsOnEdge:(_Bool *)arg4;

- (id)editableSmartFieldAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (unsigned long long)emptyParagraphCount:(struct _NSRange)arg1;

- (void)enumerateAttachmentsInTextRange:(struct _NSRange)arg1 usingBlock:(id)arg2;

- (void)enumerateAttachmentsOfClass:(Class)arg1 inTextRange:(struct _NSRange)arg2 usingBlock:(id)arg3;

- (void)enumerateParagraphsIntersectingTextRange:(struct _NSRange)arg1 usingBlock:(id)arg2;

- (void)enumerateSmartFieldsWithAttributeKind:(int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(id)arg3;

- (void)enumerateWithAttributeKind:(int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(id)arg3;

- (id)extendSelectionForTopicChildren:(id)arg1;

- (id)extendSelectionToIncludeSmartFields:(id)arg1;

- (void)filterInvalidContentForStorage:(id)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;

- (void)filterSectionBreaksFromStorage:(id)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;

- (void)findChangesInRange:(struct _NSRange)arg1 onHit:(id)arg2;

- (unsigned long long)findCharIndexForAttachment:(id)arg1;

- (unsigned long long)findCharIndexForFootnoteAttachment:(id)arg1;

- (unsigned long long)findCharacterIndexForContainedInfo:(id)arg1;

- (void)findCommentsInRange:(struct _NSRange)arg1 onHit:(id)arg2;

- (unsigned long long)findNextParagraphStyleChange:(unsigned long long)arg1 maxCharIndex:(unsigned long long)arg2;

- (id)firstHighlightForSelectionRange:(struct _NSRange)arg1 outRange:(struct _NSRange *)arg2;

- (id)firstHighlightForSelectionRange:(struct _NSRange)arg1 outRange:(struct _NSRange *)arg2 requireComment:(_Bool)arg3;

- (id)firstPageCountAttachment;

- (id)firstPageNumberAttachment;

- (unsigned long long)firstParIndexInListAtParIndex:(unsigned long long)arg1;

- (void)fixGlyphVariantFontsForRange:(struct _NSRange)arg1;

- (id)fontNameAtCharIndex:(unsigned long long)arg1 size:(double *)arg2 effectiveRange:(struct _NSRange *)arg3 styleProvider:(id)arg4;

- (id)footnoteAtFootnoteIndex:(unsigned long long)arg1 outCharIndex:(unsigned long long *)arg2;

- (unsigned long long)footnoteCount;

- (unsigned long long)footnoteIndexForCharIndex:(unsigned long long)arg1;

- (unsigned long long)footnoteIndexForFootnote:(id)arg1;

- (unsigned long long)footnoteIndexForFootnoteStorage:(id)arg1;

- (id)footnoteMarkAtCharIndex:(unsigned long long)arg1;

- (struct _NSRange)footnoteRangeForTextRange:(struct _NSRange)arg1;

- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;

- (id)footnoteReferenceAttachmentOrFootnoteMarkAttachmentAtCharIndex:(unsigned long long)arg1;

- (id)footnoteStorages;

@property(copy, nonatomic) TSDInfoGeometry *geometry;

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;

- (id)glyphVariantDataAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (_Bool)hasAttachmentsThatChangeWithPageNumberOrPageCount;

- (_Bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;

- (_Bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;

- (_Bool)hasDeletedTextAtCharIndex:(unsigned long long)arg1 range:(struct _NSRange *)arg2;

- (_Bool)hasDeletionInRange:(struct _NSRange)arg1;

- (_Bool)hasHiddenTextAtCharIndex:(unsigned long long)arg1;

- (_Bool)hasHiddenTextAtCharIndex:(unsigned long long)arg1 range:(struct _NSRange *)arg2;

- (_Bool)hasSectionForParagraphBreakAtCharIndex:(unsigned long long)arg1;

- (_Bool)hasSmartFields;

- (_Bool)hasSmartFieldsInRange:(struct _NSRange)arg1;

@property(readonly, nonatomic) _Bool hasTrackedChanges;

- (_Bool)hasVisibleText;

- (_Bool)hasVisibleTextAtCharIndex:(unsigned long long)arg1;

- (id)hiddenRangesInRange:(struct _NSRange)arg1;

- (_Bool)highlightsAllowed;

@property(nonatomic) CDStruct_0441cfb5 hyperlinkCellID; // @dynamic hyperlinkCellID;

- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(struct __CFLocale *)arg3 hyphenChar:(unsigned int *)arg4;

- (id)i_copyIntoContext:(id)arg1 stylesheet:(id)arg2;

- (id)i_copyIntoContext:(id)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 listStyle:(id)arg4 bakeModes:(_Bool)arg5 resettingHostTableToMatch:(id)arg6 referenceColorHelper:(id)arg7;

@property(nonatomic) _Bool ignoreContentsChangedNotifications; // @synthesize ignoreContentsChangedNotifications=_ignoreContentsChangedNotifications;

- (unsigned long long)indexAfterLastVisibleCharInRange:(struct _NSRange)arg1;

- (unsigned long long)indexForCharacter:(unsigned short)arg1 startCharIndex:(unsigned long long)arg2;

- (unsigned long long)indexOfFirstNonDeletedCharInRange:(struct _NSRange)arg1;

- (unsigned long long)indexOfFirstVisibleCharInRange:(struct _NSRange)arg1;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8;

- (id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 paragraphDirection:(int)arg9;

- (id)initWithContext:(id)arg1 string:(id)arg2 stylesheet:(id)arg3 kind:(int)arg4;

- (struct _NSRange)insertAttachmentOrFootnote:(id)arg1 range:(struct _NSRange)arg2;

- (struct _NSRange)insertAttachmentOrFootnote:(id)arg1 range:(struct _NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4 changeSession:(id)arg5;

- (void)insertObject:(id)arg1 charIndex:(unsigned long long)arg2 attributeArray:(struct TSWPAttributeArray *)arg3 attributeIndex:(unsigned long long)arg4 dolcContext:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6;

- (void)insertParagraphData:(CDStruct_8a5ee6e3)arg1 charIndex:(unsigned long long)arg2 attributeArray:(struct TSWPAttributeArray *)arg3 attributeIndex:(unsigned long long)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;

- (struct _NSRange)insertSection:(id)arg1 atCharIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4 changeSession:(id)arg5;

- (struct _NSRange)insertSpecialCharacter:(unsigned short)arg1 object:(id)arg2 kind:(int)arg3 range:(struct _NSRange)arg4 dolcContext:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 changeSession:(id)arg7;

- (void)insertStorage:(id)arg1 atCharIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)insertString:(id)arg1 atCharIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)insertUIGraphicalAttachment:(id)arg1;

@property(readonly, nonatomic) struct TSWPChangeAttributeArray *insertionChangesTable;

- (void)invalidateCharIndexForAttachment:(id)arg1;

- (void)invalidateFootnoteAttachmentCharIndexes;

- (void)invalidateForStyle:(id)arg1;

- (void)invalidatePageCountAttachmentCharIndexes:(_Bool)arg1;

- (_Bool)isAllWhitespaceInRange:(struct _NSRange)arg1;

@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;

@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;

- (_Bool)isDOLCSuppressed;

- (_Bool)isEmptyExceptForFormulaEqualsToken;

- (_Bool)isEmptyParagraphSelection:(id)arg1 outRange:(struct _NSRange *)arg2;

@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;

@property(readonly, nonatomic) _Bool isInInit; // @synthesize isInInit=_isInInit;

@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;

- (_Bool)isThemeContent;

- (_Bool)isWholeParagraphsForRange:(struct _NSRange)arg1 ignoreAttachmentCharacters:(_Bool)arg2 requireParagraphBreakSelected:(_Bool)arg3;

- (_Bool)isWritingDirectionRightToLeftForListAtParIndex:(unsigned long long)arg1;

- (_Bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;

- (_Bool)isWritingDirectionRightToLeftForParagraphAtParIndex:(unsigned long long)arg1;

- (id)languageAtParIndex:(unsigned long long)arg1 useStringTokenizer:(_Bool)arg2 useCreationLanguage:(_Bool)arg3;

- (id)languageForTextRange:(struct _NSRange)arg1 useStringTokenizer:(_Bool)arg2 useCreationLanguage:(_Bool)arg3;

- (Class)layoutClass;

- (unsigned long long)length;

- (unsigned long long)listEndAtCharIndex:(unsigned long long)arg1;

- (unsigned long long)listNumberForParagraphEnumerator:(const struct TSWPParagraphEnumerator *)arg1 numberingData:(CDStruct_b9fbe577 *)arg2;

- (unsigned long long)listNumberForParagraphIndex:(unsigned long long)arg1 numberingData:(CDStruct_b9fbe577 *)arg2;

- (unsigned long long)listStartAtCharIndex:(unsigned long long)arg1;

- (id)listStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)listStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (unsigned long long)listStyleCount;

- (void)lowLevelApplyObject:(id)arg1 toCharRange:(struct _NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;

- (void)lowercaseWithUndoTransaction:(struct TSWPStorageTransaction *)arg1 locale:(id)arg2;

- (id)newSubstorageWithRange:(struct _NSRange)arg1 context:(id)arg2 flags:(unsigned int)arg3;

- (id)newSubstorageWithRange:(struct _NSRange)arg1 context:(id)arg2 flags:(unsigned int)arg3 kind:(int)arg4;

- (id)newSubstorageWithRange:(struct _NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned int)arg4;

- (id)newSubstorageWithRange:(struct _NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned int)arg4 kind:(int)arg5;

- (id)nextChangeFromCharIndex:(unsigned long long)arg1 afterChange:(id)arg2 changeRange:(struct _NSRange *)arg3;

- (unsigned long long)nextCharacterIndex:(unsigned long long)arg1;

- (struct _NSRange)nextWordFromIndex:(unsigned long long)arg1 forward:(_Bool)arg2;

- (id)objectAtLocationAtExactCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2;

- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;

@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment=_owningAttachment;

@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;

- (void)pApplyOverrideObjectAfterReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 overrideObject:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)pApplyOverrideObjectAfterReplacingCharactersInSelection:(id)arg1 withString:(id)arg2 overrideObject:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (id)pDefaultSectionForContext:(id)arg1;

- (id)pFindValidInsertionCharStyleFromCharIndex:(unsigned long long)arg1;

- (id)pOverrideObjectBeforeReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 withInsertionBehavior:(int)arg3;

- (id)pOverrideObjectBeforeReplacingCharactersInSelection:(id)arg1 withString:(id)arg2;

- (struct _NSRange)p_RelocateNonSelectedAnchorsInRange:(struct _NSRange)arg1 selectionInfos:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)p_attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(struct _NSRange *)arg4;

- (void)p_didChangeRange:(struct _NSRange)arg1 delta:(long long)arg2 broadcastKind:(int)arg3;

- (struct _NSRange)p_extendRangeToIncludeSmartFields:(struct _NSRange)arg1;

- (void)p_fillMarkers:(vector_88016b54 *)arg1 startingAtCharIndex:(unsigned long long)arg2 forCount:(unsigned long long)arg3;

- (void)p_fillMarkers:(vector_a36e5995 *)arg1 string:(id)arg2 length:(unsigned long long)arg3 hasAttachments:(_Bool *)arg4 hasFootnotes:(_Bool *)arg5 hasBreaks:(_Bool *)arg6;

- (void)p_findChangesInRange:(struct _NSRange)arg1 onHit:(id)arg2 withAttributeKind:(void)arg3;

- (void)p_handleChangeSplittingForInsertedRange:(struct _NSRange)arg1 changeSession:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (_Bool)p_hasDeletedTextAtCharIndex:(unsigned long long)arg1 requireHidden:(_Bool)arg2 range:(struct _NSRange *)arg3;

- (_Bool)p_hasGoodAttributesForPlainTextPaste;

- (unsigned long long)p_indexOfFirstNonDeletedCharInRange:(struct _NSRange)arg1 requireVisible:(_Bool)arg2;

- (void)p_lowLevelReplaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 length:(unsigned long long)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)p_mutateByWordWithUndoTransaction:(struct TSWPStorageTransaction *)arg1 locale:(id)arg2 transformer:(id)arg3;

- (_Bool)p_passesExtraTablesChecksForStoringInAStringValueCell;

- (id)p_processEndNode:(id)arg1 startNode:(id)arg2 bakeModes:(_Bool)arg3 tokenDict:(id)arg4;

- (struct _NSRange)p_replaceCharactersInLogicalSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned int)arg3 replaceTextData:(CDStruct_a70f6672 *)arg4 changeSession:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 outInsertedRange:(struct _NSRange *)arg7;

- (void)p_replaceCharactersInSelection:(id)arg1 withString:(id)arg2 length:(unsigned long long)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (id)p_replacementsForSelection:(id)arg1 withString:(id)arg2 changeSession:(id)arg3 shouldTrackDeletions:(_Bool)arg4;

- (_Bool)p_shouldAcceptChangesForRange:(struct _NSRange)arg1 removeDeletedText:(_Bool *)arg2;

- (_Bool)p_shouldInsertionSplitChange:(id)arg1 changeSession:(id)arg2;

- (struct TSWPParagraphAttributeArray *)paragraphAttributeArrayForKind:(int)arg1 withCreate:(_Bool)arg2;

- (unsigned long long)paragraphCount;

- (unsigned long long)paragraphEndAtCharIndex:(unsigned long long)arg1;

- (struct TSWPParagraphEnumerator)paragraphEnumeratorAtCharIndex:(unsigned long long)arg1 styleProvider:(id)arg2;

- (struct TSWPParagraphEnumerator)paragraphEnumeratorAtParIndex:(unsigned long long)arg1 styleProvider:(id)arg2;

- (struct TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(struct _NSRange)arg1 styleProvider:(id)arg2;

- (struct TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(struct _NSRange)arg1 styleProvider:(id)arg2 requireHidden:(_Bool)arg3;

- (void)paragraphFlags:(unsigned short *)arg1 andLevel:(unsigned long long *)arg2 atCharIndex:(unsigned long long)arg3;

- (unsigned short)paragraphFlagsAtCharIndex:(unsigned long long)arg1;

- (_Bool)paragraphHasListLabelAtCharIndex:(unsigned long long)arg1;

- (unsigned long long)paragraphIndexAtCharIndex:(unsigned long long)arg1;

- (struct _NSRange)paragraphIndexRangeForCharRange:(struct _NSRange)arg1;

- (unsigned long long)paragraphLevelAtCharIndex:(unsigned long long)arg1;

- (unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1;

- (unsigned long long)paragraphStartAtCharIndex:(unsigned long long)arg1;

- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=_parentInfo;

- (id)plainTextStringFromRange:(struct _NSRange)arg1 convertTextualAttachments:(_Bool)arg2 includeChildTextStorages:(_Bool)arg3 forExport:(_Bool)arg4 withLayoutParent:(id)arg5;

- (id)previousChangeFromCharIndex:(unsigned long long)arg1 beforeChange:(id)arg2 changeRange:(struct _NSRange *)arg3;

- (unsigned long long)previousCharacterIndex:(unsigned long long)arg1;

- (unsigned long long)previousCharacterIndex:(unsigned long long)arg1 forDelete:(_Bool)arg2;

- (struct _NSRange)range;

- (struct _NSRange)rangeByExpandingToIncludePartialWords:(struct _NSRange)arg1;

- (struct _NSRange)rangeByExtendingRangeToLineBreak:(struct _NSRange)arg1;

- (struct _NSRange)rangeByExtendingRangeToWhitespace:(struct _NSRange)arg1;

- (struct _NSRange)rangeByExtendingRangeToWhitespace:(struct _NSRange)arg1 skipVisibleDeleted:(_Bool)arg2;

- (struct _NSRange)rangeByTrimmingRange:(struct _NSRange)arg1 withBlock:(id)arg2;

- (struct _NSRange)rangeForCellID:(CDStruct_0441cfb5)arg1 includingBreak:(_Bool)arg2;

- (struct _NSRange)rangeForChange:(id)arg1;

- (struct _NSRange)rangeForHighlight:(id)arg1;

- (struct _NSRange)rangeForSelecting:(id)arg1;

- (struct _NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2;

- (struct _NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;

- (struct _NSRange)rangeForTrackedChanges:(id)arg1;

- (struct _NSRange)rangeOfAnnotationWithOptions:(unsigned long long)arg1 range:(struct _NSRange)arg2;

- (struct _NSRange)rangeOfParagraphBreakingCharacter:(unsigned short)arg1 backwards:(_Bool)arg2 range:(struct _NSRange)arg3;

- (struct _NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 range:(struct _NSRange)arg3;

- (struct _NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;

- (id)rangesForLocalization;

- (id)referencedStyles;

- (id)referencedStylesOfClass:(Class)arg1;

- (id)relocateNonSelectedAnchorsInSelection:(id)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;

- (void)removeDisallowedElementKind:(int)arg1;

- (void)removeGlyphVariantDataFromRange:(struct _NSRange)arg1;

- (void)removeObserver:(id)arg1;

- (void)removeSmartField:(id)arg1 fromRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (Class)repClass;

- (struct _NSRange)replaceAllOccurrencesOfObject:(id)arg1 withObject:(id)arg2 forKind:(int)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (struct _NSRange)replaceAllOccurrencesOfStyle:(id)arg1 withStyle:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (struct _NSRange)replaceCharactersInRange:(struct _NSRange)arg1 withStorage:(id)arg2 usePasteRules:(_Bool)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;

- (struct _NSRange)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 notifyObservers:(_Bool)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 options:(unsigned long long)arg3 changedRange:(struct _NSRange *)arg4 changeDelta:(long long *)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 changeSession:(id)arg7;

- (struct _NSRange)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (struct _NSRange)replaceCharactersInSelection:(id)arg1 withStorage:(id)arg2 usePasteRules:(_Bool)arg3 dolcContext:(id)arg4 changeSession:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6;

- (struct _NSRange)replaceCharactersInSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned int)arg3 replaceTextData:(CDStruct_a70f6672 *)arg4 changeSession:(id)arg5 undoTransaction:(struct TSWPStorageTransaction *)arg6 outInsertedRange:(struct _NSRange *)arg7;

- (void)replaceReferencedStylesUsingBlock:(id)arg1;

- (void)replaceSectionAtSectionIndex:(unsigned long long)arg1 withSection:(id)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)replaceWithAttachment:(id)arg1 forAttachmentIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)saveRange:(struct _NSRange)arg1 toArchiver:(id)arg2 styleProvider:(id)arg3 archiveChanges:(_Bool)arg4 removeDeletedText:(_Bool)arg5;

- (void)saveToArchiver:(id)arg1;

- (struct _NSRange)scanLeftForWordAtCharIndex:(unsigned long long)arg1;

- (id)searchForAnnotationsWithHitBlock:(id)arg1;

- (id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(id)arg3;

- (id)searchInRange:(struct _NSRange)arg1 forString:(id)arg2 options:(unsigned long long)arg3 onHit:(id)arg4;

- (id)sectionAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)sectionAtSectionIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (unsigned long long)sectionCount;

- (struct TPSectionEnumerator)sectionEnumeratorAtCharIndex:(unsigned long long)arg1;

- (struct TPSectionEnumerator)sectionEnumeratorAtSectionIndex:(unsigned long long)arg1;

- (struct TPSectionEnumerator)sectionEnumeratorForCharRange:(struct _NSRange)arg1;

- (unsigned long long)sectionIndexForCharIndex:(unsigned long long)arg1;

- (unsigned long long)sectionIndexForSection:(id)arg1;

- (unsigned long long)selectedParagraphBreakCount:(struct _NSRange)arg1;

- (_Bool)selectionContainsVisibleTrackedChanges:(id)arg1;

- (struct _NSRange)selectionRangeForCharIndex:(unsigned long long)arg1;

- (unsigned long long)selectionRangeMaxForCharIndex:(unsigned long long)arg1;

- (unsigned long long)selectionRangeMinForCharIndex:(unsigned long long)arg1;

- (void)setCharacterStyle:(id)arg1 range:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setColumnStyle:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (_Bool)setDOLCSuppressed:(_Bool)arg1;

- (void)setDictationAndAutocorrection:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setDocumentRoot:(id)arg1;

- (void)setLanguage:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setListStart:(unsigned long long)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setListStyle:(id)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setListStyle:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setParagraphFlags:(unsigned short)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setParagraphFlags:(unsigned short)arg1 level:(unsigned long long)arg2 forCharRange:(struct _NSRange)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)setParagraphLevel:(unsigned long long)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setParagraphLevel:(unsigned long long)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setParagraphStyle:(id)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setParagraphStyle:(id)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setParagraphWritingDirection:(int)arg1 forCharRange:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;

- (void)setWPKind:(int)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;

- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;

- (void)smartFieldDidChange:(id)arg1;

- (id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(struct _NSRange)arg2;

- (id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(struct _NSRange)arg2 passingTest:(id)arg3;

- (void)splitSmartFieldAtCharIndex:(unsigned long long)arg1 lengthToInsert:(unsigned long long)arg2 attributeKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;

- (void)splitSmartFieldAtCharIndex:(unsigned long long)arg1 lengthToInsert:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;

- (void)stashBroadcaster;

- (unsigned long long)storageLength;

- (id)string;

- (id)stringEquivalentFromRange:(struct _NSRange)arg1;

- (id)stringEquivalentFromRange:(struct _NSRange)arg1 withLayoutParent:(id)arg2;

- (id)stringForStatisticsInRange:(struct _NSRange)arg1;

- (id)stringValue;

- (id)stringWithFormulaPlainText;

- (id)stringWithFormulaPlainTextFromRange:(struct _NSRange)arg1;

- (void)styleDidChangeInRange:(struct _NSRange)arg1;

- (_Bool)styleOverridesAppliedToRange:(struct _NSRange)arg1;

- (id)stylesheet;

- (id)substringWithRange:(struct _NSRange)arg1;

- (id)substringWithSelection:(id)arg1;

- (_Bool)supportsColumnStyles;

- (_Bool)supportsListStyles;

- (_Bool)supportsSectionCopying;

- (_Bool)supportsSections;

- (void)takeText:(id)arg1;

- (void)takeText:(id)arg1 andSetLanguage:(id)arg2;

- (_Bool)textIsVertical;

- (struct _NSRange)textRangeForListAtCharIndex:(unsigned long long)arg1;

- (struct _NSRange)textRangeForListsInCharRange:(struct _NSRange)arg1;

- (struct _NSRange)textRangeForParagraphAtCharIndex:(unsigned long long)arg1;

- (struct _NSRange)textRangeForParagraphAtIndex:(unsigned long long)arg1;

- (struct _NSRange)textRangeForParagraphsInCharRange:(struct _NSRange)arg1;

- (struct _NSRange)textRangeIgnoringTrailingLineBreaksForParagraphAtIndex:(unsigned long long)arg1;

- (id)textSourceForLayoutInRange:(struct _NSRange)arg1;

- (id)trackerForController:(id)arg1;

- (void)transferAttributeArraySource:(struct TSWPAttributeArray *)arg1 forSourceRange:(struct _NSRange)arg2 toDestStorage:(id)arg3 objectContext:(id)arg4 dolcContext:(id)arg5 flags:(int)arg6;

- (void)transferAttributeArraySource:(struct TSWPAttributeArray *)arg1 toAttributeArrayDest:(struct TSWPAttributeArray *)arg2 atCharIndex:(unsigned long long)arg3 dolcContext:(id)arg4 undoTransaction:(struct TSWPStorageTransaction *)arg5;

- (void)unarchiverAppendParagraphBreak:(unsigned short)arg1;

- (void)undoAdjustCharIndexes:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationRange:(struct _NSRange *)arg3;

- (void)undoCTDate:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationRange:(struct _NSRange *)arg3;

- (void)undoDOLC:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationRange:(struct _NSRange *)arg3;

- (void)undoDeleteAttribute:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationRange:(struct _NSRange *)arg3;

- (void)undoInsertAttribute:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationRange:(struct _NSRange *)arg3;

- (void)undoReplaceCharIndex:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationRange:(struct _NSRange *)arg3;

- (void)undoReplaceObject:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationRange:(struct _NSRange *)arg3;

- (void)undoReplaceParagraphData:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationRange:(struct _NSRange *)arg3;

- (void)undoReplaceText:(const struct TSWPStorageTransactionObject *)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 notificationDelta:(long long *)arg3 notificationRange:(struct _NSRange *)arg4;

- (struct _NSRange)undoTransaction:(const struct TSWPStorageTransaction *)arg1 redoTransaction:(struct TSWPStorageTransaction *)arg2;

- (void)unstashBroadcaster;

- (void)uppercaseWithUndoTransaction:(struct TSWPStorageTransaction *)arg1 locale:(id)arg2;

- (id)valueForBIUProperties:(id)arg1;

- (id)valueForBIUProperties:(id)arg1 selection:(id)arg2 insertionStyle:(id)arg3;

- (id)valueForProperty:(int)arg1 atCharIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;

- (id)visibleRangesInRange:(struct _NSRange)arg1;

- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;

- (struct _NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1;

- (struct _NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(_Bool)arg2;

- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;

- (void)willBeRemovedFromDocumentRoot:(id)arg1;

- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;

- (unsigned long long)wordCount;

- (int)wpKind;

- (int)writingDirectionForParagraphAtCharIndex:(unsigned long long)arg1;

- (int)writingDirectionForParagraphAtParIndex:(unsigned long long)arg1;



// Remaining properties

@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;



@end


