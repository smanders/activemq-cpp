/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <activemq/commands/ConnectionId.h>
#include <activemq/exceptions/ActiveMQException.h>
#include <decaf/lang/exceptions/NullPointerException.h>

using namespace std;
using namespace activemq;
using namespace activemq::exceptions;
using namespace activemq::commands;
using namespace decaf::lang::exceptions;

/*
 *
 *  Command and marshaling code for OpenWire format for ConnectionId
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Java Classes in the
 *         activemq-core module
 *
 */
////////////////////////////////////////////////////////////////////////////////
ConnectionId::ConnectionId()
{
    this->value = "";
}

////////////////////////////////////////////////////////////////////////////////
ConnectionId::~ConnectionId()
{
}

////////////////////////////////////////////////////////////////////////////////
ConnectionId* ConnectionId::cloneDataStructure() const {
    ConnectionId* connectionId = new ConnectionId();

    // Copy the data from the base class or classes
    connectionId->copyDataStructure( this );

    return connectionId;
}

////////////////////////////////////////////////////////////////////////////////
void ConnectionId::copyDataStructure( const DataStructure* src ) {

    // Copy the data of the base class or classes
    BaseDataStructure::copyDataStructure( src );

    const ConnectionId* srcPtr = dynamic_cast<const ConnectionId*>( src );

    if( srcPtr == NULL || src == NULL ) {

        throw decaf::lang::exceptions::NullPointerException(
            __FILE__, __LINE__,
            "ConnectionId::copyDataStructure - src is NULL or invalid" );
    }
    this->setValue( srcPtr->getValue() );
}

////////////////////////////////////////////////////////////////////////////////
unsigned char ConnectionId::getDataStructureType() const {
    return ConnectionId::ID_CONNECTIONID;
}

////////////////////////////////////////////////////////////////////////////////
std::string ConnectionId::toString() const {

    ostringstream stream;

    stream << "Begin Class = ConnectionId" << std::endl;
    stream << " Value of ConnectionId::ID_CONNECTIONID = 120" << std::endl;
    stream << " Value of Value = " << this->getValue() << std::endl;
    stream << BaseDataStructure::toString();
    stream << "End Class = ConnectionId" << std::endl;

    return stream.str();
}

////////////////////////////////////////////////////////////////////////////////
bool ConnectionId::equals( const DataStructure* value ) const {
    const ConnectionId* valuePtr = dynamic_cast<const ConnectionId*>( value );

    if( valuePtr == NULL || value == NULL ) {
        return false;
    }
    if( this->getValue() != valuePtr->getValue() ) {
        return false;
    }
    if( !BaseDataStructure::equals( value ) ) {
        return false;
    }
    return true;
}

////////////////////////////////////////////////////////////////////////////////
const std::string& ConnectionId::getValue() const {
    return value;
}

////////////////////////////////////////////////////////////////////////////////
std::string& ConnectionId::getValue() {
    return value;
}

////////////////////////////////////////////////////////////////////////////////
void ConnectionId::setValue(const std::string& value ) {
    this->value = value;
}

