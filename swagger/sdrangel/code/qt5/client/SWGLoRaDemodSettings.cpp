/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.1.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGLoRaDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGLoRaDemodSettings::SWGLoRaDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLoRaDemodSettings::SWGLoRaDemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    bandwidth_index = 0;
    m_bandwidth_index_isSet = false;
    spread_factor = 0;
    m_spread_factor_isSet = false;
    de_bits = 0;
    m_de_bits_isSet = false;
    coding_scheme = 0;
    m_coding_scheme_isSet = false;
    decode_active = 0;
    m_decode_active_isSet = false;
    eom_squelch_tenths = 0;
    m_eom_squelch_tenths_isSet = false;
    nb_symbols_max = 0;
    m_nb_symbols_max_isSet = false;
    preamble_chirps = 0;
    m_preamble_chirps_isSet = false;
    nb_parity_bits = 0;
    m_nb_parity_bits_isSet = false;
    packet_length = 0;
    m_packet_length_isSet = false;
    has_crc = 0;
    m_has_crc_isSet = false;
    has_header = 0;
    m_has_header_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

SWGLoRaDemodSettings::~SWGLoRaDemodSettings() {
    this->cleanup();
}

void
SWGLoRaDemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    bandwidth_index = 0;
    m_bandwidth_index_isSet = false;
    spread_factor = 0;
    m_spread_factor_isSet = false;
    de_bits = 0;
    m_de_bits_isSet = false;
    coding_scheme = 0;
    m_coding_scheme_isSet = false;
    decode_active = 0;
    m_decode_active_isSet = false;
    eom_squelch_tenths = 0;
    m_eom_squelch_tenths_isSet = false;
    nb_symbols_max = 0;
    m_nb_symbols_max_isSet = false;
    preamble_chirps = 0;
    m_preamble_chirps_isSet = false;
    nb_parity_bits = 0;
    m_nb_parity_bits_isSet = false;
    packet_length = 0;
    m_packet_length_isSet = false;
    has_crc = 0;
    m_has_crc_isSet = false;
    has_header = 0;
    m_has_header_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

void
SWGLoRaDemodSettings::cleanup() {














    if(title != nullptr) { 
        delete title;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



}

SWGLoRaDemodSettings*
SWGLoRaDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLoRaDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&bandwidth_index, pJson["bandwidthIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&spread_factor, pJson["spreadFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&de_bits, pJson["deBits"], "qint32", "");
    
    ::SWGSDRangel::setValue(&coding_scheme, pJson["codingScheme"], "qint32", "");
    
    ::SWGSDRangel::setValue(&decode_active, pJson["decodeActive"], "qint32", "");
    
    ::SWGSDRangel::setValue(&eom_squelch_tenths, pJson["eomSquelchTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nb_symbols_max, pJson["nbSymbolsMax"], "qint32", "");
    
    ::SWGSDRangel::setValue(&preamble_chirps, pJson["preambleChirps"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nb_parity_bits, pJson["nbParityBits"], "qint32", "");
    
    ::SWGSDRangel::setValue(&packet_length, pJson["packetLength"], "qint32", "");
    
    ::SWGSDRangel::setValue(&has_crc, pJson["hasCRC"], "qint32", "");
    
    ::SWGSDRangel::setValue(&has_header, pJson["hasHeader"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
}

QString
SWGLoRaDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGLoRaDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_bandwidth_index_isSet){
        obj->insert("bandwidthIndex", QJsonValue(bandwidth_index));
    }
    if(m_spread_factor_isSet){
        obj->insert("spreadFactor", QJsonValue(spread_factor));
    }
    if(m_de_bits_isSet){
        obj->insert("deBits", QJsonValue(de_bits));
    }
    if(m_coding_scheme_isSet){
        obj->insert("codingScheme", QJsonValue(coding_scheme));
    }
    if(m_decode_active_isSet){
        obj->insert("decodeActive", QJsonValue(decode_active));
    }
    if(m_eom_squelch_tenths_isSet){
        obj->insert("eomSquelchTenths", QJsonValue(eom_squelch_tenths));
    }
    if(m_nb_symbols_max_isSet){
        obj->insert("nbSymbolsMax", QJsonValue(nb_symbols_max));
    }
    if(m_preamble_chirps_isSet){
        obj->insert("preambleChirps", QJsonValue(preamble_chirps));
    }
    if(m_nb_parity_bits_isSet){
        obj->insert("nbParityBits", QJsonValue(nb_parity_bits));
    }
    if(m_packet_length_isSet){
        obj->insert("packetLength", QJsonValue(packet_length));
    }
    if(m_has_crc_isSet){
        obj->insert("hasCRC", QJsonValue(has_crc));
    }
    if(m_has_header_isSet){
        obj->insert("hasHeader", QJsonValue(has_header));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }

    return obj;
}

qint64
SWGLoRaDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGLoRaDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

qint32
SWGLoRaDemodSettings::getBandwidthIndex() {
    return bandwidth_index;
}
void
SWGLoRaDemodSettings::setBandwidthIndex(qint32 bandwidth_index) {
    this->bandwidth_index = bandwidth_index;
    this->m_bandwidth_index_isSet = true;
}

qint32
SWGLoRaDemodSettings::getSpreadFactor() {
    return spread_factor;
}
void
SWGLoRaDemodSettings::setSpreadFactor(qint32 spread_factor) {
    this->spread_factor = spread_factor;
    this->m_spread_factor_isSet = true;
}

qint32
SWGLoRaDemodSettings::getDeBits() {
    return de_bits;
}
void
SWGLoRaDemodSettings::setDeBits(qint32 de_bits) {
    this->de_bits = de_bits;
    this->m_de_bits_isSet = true;
}

qint32
SWGLoRaDemodSettings::getCodingScheme() {
    return coding_scheme;
}
void
SWGLoRaDemodSettings::setCodingScheme(qint32 coding_scheme) {
    this->coding_scheme = coding_scheme;
    this->m_coding_scheme_isSet = true;
}

qint32
SWGLoRaDemodSettings::getDecodeActive() {
    return decode_active;
}
void
SWGLoRaDemodSettings::setDecodeActive(qint32 decode_active) {
    this->decode_active = decode_active;
    this->m_decode_active_isSet = true;
}

qint32
SWGLoRaDemodSettings::getEomSquelchTenths() {
    return eom_squelch_tenths;
}
void
SWGLoRaDemodSettings::setEomSquelchTenths(qint32 eom_squelch_tenths) {
    this->eom_squelch_tenths = eom_squelch_tenths;
    this->m_eom_squelch_tenths_isSet = true;
}

qint32
SWGLoRaDemodSettings::getNbSymbolsMax() {
    return nb_symbols_max;
}
void
SWGLoRaDemodSettings::setNbSymbolsMax(qint32 nb_symbols_max) {
    this->nb_symbols_max = nb_symbols_max;
    this->m_nb_symbols_max_isSet = true;
}

qint32
SWGLoRaDemodSettings::getPreambleChirps() {
    return preamble_chirps;
}
void
SWGLoRaDemodSettings::setPreambleChirps(qint32 preamble_chirps) {
    this->preamble_chirps = preamble_chirps;
    this->m_preamble_chirps_isSet = true;
}

qint32
SWGLoRaDemodSettings::getNbParityBits() {
    return nb_parity_bits;
}
void
SWGLoRaDemodSettings::setNbParityBits(qint32 nb_parity_bits) {
    this->nb_parity_bits = nb_parity_bits;
    this->m_nb_parity_bits_isSet = true;
}

qint32
SWGLoRaDemodSettings::getPacketLength() {
    return packet_length;
}
void
SWGLoRaDemodSettings::setPacketLength(qint32 packet_length) {
    this->packet_length = packet_length;
    this->m_packet_length_isSet = true;
}

qint32
SWGLoRaDemodSettings::getHasCrc() {
    return has_crc;
}
void
SWGLoRaDemodSettings::setHasCrc(qint32 has_crc) {
    this->has_crc = has_crc;
    this->m_has_crc_isSet = true;
}

qint32
SWGLoRaDemodSettings::getHasHeader() {
    return has_header;
}
void
SWGLoRaDemodSettings::setHasHeader(qint32 has_header) {
    this->has_header = has_header;
    this->m_has_header_isSet = true;
}

qint32
SWGLoRaDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGLoRaDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGLoRaDemodSettings::getTitle() {
    return title;
}
void
SWGLoRaDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGLoRaDemodSettings::getStreamIndex() {
    return stream_index;
}
void
SWGLoRaDemodSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGLoRaDemodSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGLoRaDemodSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGLoRaDemodSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGLoRaDemodSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGLoRaDemodSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGLoRaDemodSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGLoRaDemodSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGLoRaDemodSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGLoRaDemodSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGLoRaDemodSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}


bool
SWGLoRaDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bandwidth_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_spread_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_de_bits_isSet){
            isObjectUpdated = true; break;
        }
        if(m_coding_scheme_isSet){
            isObjectUpdated = true; break;
        }
        if(m_decode_active_isSet){
            isObjectUpdated = true; break;
        }
        if(m_eom_squelch_tenths_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nb_symbols_max_isSet){
            isObjectUpdated = true; break;
        }
        if(m_preamble_chirps_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nb_parity_bits_isSet){
            isObjectUpdated = true; break;
        }
        if(m_packet_length_isSet){
            isObjectUpdated = true; break;
        }
        if(m_has_crc_isSet){
            isObjectUpdated = true; break;
        }
        if(m_has_header_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

