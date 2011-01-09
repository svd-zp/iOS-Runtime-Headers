/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDColumnInfo;



@interface EMColumnInfoMapper : CMMapper 
{
    EDColumnInfo *edColumnInfo;
    double columnWidth;
    NSInteger columnSpan;
}


- (double)columnWidth;
- (id)initWithDefaultWidth:(double)arg1 span:(NSInteger)arg2 parent:(id)arg3;
- (id)initWithEDColumnInfo:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end