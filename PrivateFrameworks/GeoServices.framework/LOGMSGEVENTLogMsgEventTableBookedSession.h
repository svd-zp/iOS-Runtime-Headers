/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying> {
    NSString * _bookedTableSessionId;
    NSMutableArray * _bookedTables;
}

@property (nonatomic, retain) NSString *bookedTableSessionId;
@property (nonatomic, retain) NSMutableArray *bookedTables;
@property (nonatomic, readonly) BOOL hasBookedTableSessionId;

+ (Class)bookedTableType;

- (void)addBookedTable:(id)arg1;
- (id)bookedTableAtIndex:(unsigned int)arg1;
- (id)bookedTableSessionId;
- (id)bookedTables;
- (unsigned int)bookedTablesCount;
- (void)clearBookedTables;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBookedTableSessionId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBookedTableSessionId:(id)arg1;
- (void)setBookedTables:(id)arg1;
- (void)writeTo:(id)arg1;

@end