/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EDRowBlock : NSObject 
{
    struct __CFData { } *mPackedData;
    struct __CFData { } *mCellOffsets;
}

+ (id)rowBlock;

- (NSUInteger)index;
- (id)init;
- (void)dealloc;
- (void)doneWithContent;
- (NSUInteger)indexOfCellWithColumnNumber:(NSUInteger)arg1 rowInfo:(struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2;
- (void)removeCellAtIndex:(NSUInteger)arg1 rowInfo:(struct EDRowInfo {}**)arg2;
- (NSUInteger)firstRowNumber;
- (NSUInteger)lastRowNumber;
- (void)incrementIndex;
- (void)unarchiveFromData:(struct __CFData { }*)arg1 offset:(NSUInteger*)arg2;
- (NSUInteger)indexOfRowInfoWithRowNumber:(NSUInteger)arg1;
- (struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)addRowInfoWithRowNumber:(NSUInteger)arg1 cellCountHint:(NSUInteger)arg2;
- (struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)rowInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)expectedIndexOfCellWithColumnNumber:(NSUInteger)arg1 rowInfo:(struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2;
- (void)archiveByAppendingToMutableData:(struct __CFData { }*)arg1;
- (struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)rowInfoWithRowNumber:(NSUInteger)arg1 createIfNil:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: ^{EDRowInfo=IISSSSCb1b1}16@0:4I8B12 */

- (struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)addCellWithColumnNumber:(NSUInteger)arg1 type:(NSInteger)arg2 isFormulaCell:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg3 rowInfo:(struct EDRowInfo {}**)arg4 rowBlocks:(id)arg5;
     /* Encoded args for previous method: ^{EDCellHeader=SI}28@0:4I8i12B16^^{EDRowInfo}20@24 */

- (void)setIndex:(NSUInteger)arg1;
- (NSUInteger)rowCount;
- (struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)rowInfoWithRowNumber:(NSUInteger)arg1;
- (struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)cellAtIndex:(NSUInteger)arg1 rowInfo:(struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2;
- (struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)cellWithColumnNumber:(NSUInteger)arg1 rowInfo:(struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2;

@end