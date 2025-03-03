/**
 *
 *  ClientGrantType.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "ClientGrantType.h"
#include "Client.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::auth_server;

const std::string ClientGrantType::Cols::_client_id = "\"client_id\"";
const std::string ClientGrantType::Cols::_grant_type = "\"grant_type\"";
const std::vector<std::string> ClientGrantType::primaryKeyName = {"client_id","grant_type"};
const bool ClientGrantType::hasPrimaryKey = true;
const std::string ClientGrantType::tableName = "\"client_grant_type\"";

const std::vector<typename ClientGrantType::MetaData> ClientGrantType::metaData_={
{"client_id","std::string","character varying",128,0,1,1},
{"grant_type","std::string","USER-DEFINED",0,0,1,1}
};
const std::string &ClientGrantType::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
ClientGrantType::ClientGrantType(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["client_id"].isNull())
        {
            clientId_=std::make_shared<std::string>(r["client_id"].as<std::string>());
        }
        if(!r["grant_type"].isNull())
        {
            grantType_=std::make_shared<std::string>(r["grant_type"].as<std::string>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 2 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            clientId_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            grantType_=std::make_shared<std::string>(r[index].as<std::string>());
        }
    }

}

ClientGrantType::ClientGrantType(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 2)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            clientId_=std::make_shared<std::string>(pJson[pMasqueradingVector[0]].asString());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            grantType_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
}

ClientGrantType::ClientGrantType(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("client_id"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["client_id"].isNull())
        {
            clientId_=std::make_shared<std::string>(pJson["client_id"].asString());
        }
    }
    if(pJson.isMember("grant_type"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["grant_type"].isNull())
        {
            grantType_=std::make_shared<std::string>(pJson["grant_type"].asString());
        }
    }
}

void ClientGrantType::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 2)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            clientId_=std::make_shared<std::string>(pJson[pMasqueradingVector[0]].asString());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            grantType_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
}

void ClientGrantType::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("client_id"))
    {
        if(!pJson["client_id"].isNull())
        {
            clientId_=std::make_shared<std::string>(pJson["client_id"].asString());
        }
    }
    if(pJson.isMember("grant_type"))
    {
        if(!pJson["grant_type"].isNull())
        {
            grantType_=std::make_shared<std::string>(pJson["grant_type"].asString());
        }
    }
}

const std::string &ClientGrantType::getValueOfClientId() const noexcept
{
    static const std::string defaultValue = std::string();
    if(clientId_)
        return *clientId_;
    return defaultValue;
}
const std::shared_ptr<std::string> &ClientGrantType::getClientId() const noexcept
{
    return clientId_;
}
void ClientGrantType::setClientId(const std::string &pClientId) noexcept
{
    clientId_ = std::make_shared<std::string>(pClientId);
    dirtyFlag_[0] = true;
}
void ClientGrantType::setClientId(std::string &&pClientId) noexcept
{
    clientId_ = std::make_shared<std::string>(std::move(pClientId));
    dirtyFlag_[0] = true;
}

const std::string &ClientGrantType::getValueOfGrantType() const noexcept
{
    static const std::string defaultValue = std::string();
    if(grantType_)
        return *grantType_;
    return defaultValue;
}
const std::shared_ptr<std::string> &ClientGrantType::getGrantType() const noexcept
{
    return grantType_;
}
void ClientGrantType::setGrantType(const std::string &pGrantType) noexcept
{
    grantType_ = std::make_shared<std::string>(pGrantType);
    dirtyFlag_[1] = true;
}
void ClientGrantType::setGrantType(std::string &&pGrantType) noexcept
{
    grantType_ = std::make_shared<std::string>(std::move(pGrantType));
    dirtyFlag_[1] = true;
}

void ClientGrantType::updateId(const uint64_t id)
{
}
typename ClientGrantType::PrimaryKeyType ClientGrantType::getPrimaryKey() const
{
    return std::make_tuple(*clientId_,*grantType_);
}

const std::vector<std::string> &ClientGrantType::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "client_id",
        "grant_type"
    };
    return inCols;
}

void ClientGrantType::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getClientId())
        {
            binder << getValueOfClientId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getGrantType())
        {
            binder << getValueOfGrantType();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> ClientGrantType::updateColumns() const
{
    std::vector<std::string> ret;
    if(dirtyFlag_[0])
    {
        ret.push_back(getColumnName(0));
    }
    if(dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    return ret;
}

void ClientGrantType::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getClientId())
        {
            binder << getValueOfClientId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getGrantType())
        {
            binder << getValueOfGrantType();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value ClientGrantType::toJson() const
{
    Json::Value ret;
    if(getClientId())
    {
        ret["client_id"]=getValueOfClientId();
    }
    else
    {
        ret["client_id"]=Json::Value();
    }
    if(getGrantType())
    {
        ret["grant_type"]=getValueOfGrantType();
    }
    else
    {
        ret["grant_type"]=Json::Value();
    }
    return ret;
}

Json::Value ClientGrantType::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 2)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getClientId())
            {
                ret[pMasqueradingVector[0]]=getValueOfClientId();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getGrantType())
            {
                ret[pMasqueradingVector[1]]=getValueOfGrantType();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getClientId())
    {
        ret["client_id"]=getValueOfClientId();
    }
    else
    {
        ret["client_id"]=Json::Value();
    }
    if(getGrantType())
    {
        ret["grant_type"]=getValueOfGrantType();
    }
    else
    {
        ret["grant_type"]=Json::Value();
    }
    return ret;
}

bool ClientGrantType::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("client_id"))
    {
        if(!validJsonOfField(0, "client_id", pJson["client_id"], err, true))
            return false;
    }
    else
    {
        err="The client_id column cannot be null";
        return false;
    }
    if(pJson.isMember("grant_type"))
    {
        if(!validJsonOfField(1, "grant_type", pJson["grant_type"], err, true))
            return false;
    }
    else
    {
        err="The grant_type column cannot be null";
        return false;
    }
    return true;
}
bool ClientGrantType::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                         const std::vector<std::string> &pMasqueradingVector,
                                                         std::string &err)
{
    if(pMasqueradingVector.size() != 2)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty())
      {
          if(pJson.isMember(pMasqueradingVector[0]))
          {
              if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[0] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[1].empty())
      {
          if(pJson.isMember(pMasqueradingVector[1]))
          {
              if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[1] + " column cannot be null";
            return false;
        }
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool ClientGrantType::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("client_id"))
    {
        if(!validJsonOfField(0, "client_id", pJson["client_id"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    if(pJson.isMember("grant_type"))
    {
        if(!validJsonOfField(1, "grant_type", pJson["grant_type"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    return true;
}
bool ClientGrantType::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                                       const std::vector<std::string> &pMasqueradingVector,
                                                       std::string &err)
{
    if(pMasqueradingVector.size() != 2)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
      {
          if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, false))
              return false;
      }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
      if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
      {
          if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, false))
              return false;
      }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool ClientGrantType::validJsonOfField(size_t index,
                                       const std::string &fieldName,
                                       const Json::Value &pJson,
                                       std::string &err,
                                       bool isForCreation)
{
    switch(index)
    {
        case 0:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            if(pJson.isString() && std::strlen(pJson.asCString()) > 128)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 128)";
                return false;
            }

            break;
        case 1:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        default:
            err="Internal error in the server";
            return false;
    }
    return true;
}
Client ClientGrantType::getClient(const DbClientPtr &clientPtr) const {
    static const std::string sql = "select * from client where client_id = $1";
    Result r(nullptr);
    {
        auto binder = *clientPtr << sql;
        binder << *clientId_ << Mode::Blocking >>
            [&r](const Result &result) { r = result; };
        binder.exec();
    }
    if (r.size() == 0)
    {
        throw UnexpectedRows("0 rows found");
    }
    else if (r.size() > 1)
    {
        throw UnexpectedRows("Found more than one row");
    }
    return Client(r[0]);
}

void ClientGrantType::getClient(const DbClientPtr &clientPtr,
                                const std::function<void(Client)> &rcb,
                                const ExceptionCallback &ecb) const
{
    static const std::string sql = "select * from client where client_id = $1";
    *clientPtr << sql
               << *clientId_
               >> [rcb = std::move(rcb), ecb](const Result &r){
                    if (r.size() == 0)
                    {
                        ecb(UnexpectedRows("0 rows found"));
                    }
                    else if (r.size() > 1)
                    {
                        ecb(UnexpectedRows("Found more than one row"));
                    }
                    else
                    {
                        rcb(Client(r[0]));
                    }
               }
               >> ecb;
}
